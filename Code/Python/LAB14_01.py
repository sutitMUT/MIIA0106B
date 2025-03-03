import numpy as np

# Sigmoid function and derivative
def sigmoid(x):
    return 1 / (1 + np.exp(-x))

def sigmoid_derivative(x):
    return x * (1 - x)

# XOR dataset
X = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])  # Inputs
Y = np.array([[0], [1], [1], [0]])  # Expected outputs

# Initialize weights and biases
np.random.seed(1)
w_hidden = np.random.uniform(-1, 1, (2, 2))  # Weights for hidden layer
b_hidden = np.random.uniform(-1, 1, (1, 2))  # Bias for hidden layer
w_output = np.random.uniform(-1, 1, (2, 1))  # Weights for output layer
b_output = np.random.uniform(-1, 1, (1, 1))  # Bias for output layer

# Training parameters
epochs = 10000
learning_rate = 0.5

# Training loop
for epoch in range(epochs):
    # Forward propagation
    hidden_input = np.dot(X, w_hidden) + b_hidden
    hidden_output = sigmoid(hidden_input)
    
    final_input = np.dot(hidden_output, w_output) + b_output
    final_output = sigmoid(final_input)

    # Compute loss (Mean Squared Error)
    error = Y - final_output
    loss = np.mean(error**2)

    # Backpropagation
    d_output = error * sigmoid_derivative(final_output)  # Gradient of output layer
    d_hidden = d_output.dot(w_output.T) * sigmoid_derivative(hidden_output)  # Gradient of hidden layer

    # Update weights and biases
    w_output += hidden_output.T.dot(d_output) * learning_rate
    b_output += np.sum(d_output, axis=0, keepdims=True) * learning_rate
    w_hidden += X.T.dot(d_hidden) * learning_rate
    b_hidden += np.sum(d_hidden, axis=0, keepdims=True) * learning_rate

    # Print loss every 1000 epochs
    if epoch % 1000 == 0:
        print(f"Epoch {epoch}, Loss: {loss:.6f}")

# Test the model
print("\nFinal Predictions:")
for i in range(4):
    hidden_input = np.dot(X[i], w_hidden) + b_hidden
    hidden_output = sigmoid(hidden_input)
    final_input = np.dot(hidden_output, w_output) + b_output
    final_output = sigmoid(final_input)
    print(f"Input: {X[i]} => Predicted Output: {final_output[0][0]:.4f}")
