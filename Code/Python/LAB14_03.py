import struct
import math
import random

# Function: Sigmoid Activation
def sigmoid(x):
    return 1 / (1 + math.exp(-x))

# Function: Sigmoid Derivative
def sigmoid_derivative(x):
    return x * (1 - x)

# Load MNIST dataset
def load_mnist_images(filename):
    with open(filename, 'rb') as f:
        _, num, rows, cols = struct.unpack(">IIII", f.read(16))
        return [[p / 255.0 for p in f.read(rows * cols)] for _ in range(num)]

def load_mnist_labels(filename):
    with open(filename, 'rb') as f:
        _, num = struct.unpack(">II", f.read(8))
        return [int.from_bytes(f.read(1), 'big') for _ in range(num)]

# Train Neural Network
def train_network(X, Y, epochs=1000, learning_rate=0.1):
    random.seed(42)

    # Initialize weights and biases
    w_hidden1 = [[random.uniform(-1, 1) for _ in range(784)] for _ in range(128)]
    w_hidden2 = [[random.uniform(-1, 1) for _ in range(128)] for _ in range(64)]
    w_output = [[random.uniform(-1, 1) for _ in range(64)] for _ in range(10)]
    
    b_hidden1 = [random.uniform(-1, 1) for _ in range(128)]
    b_hidden2 = [random.uniform(-1, 1) for _ in range(64)]
    b_output = [random.uniform(-1, 1) for _ in range(10)]

    for epoch in range(epochs):
        total_loss = 0

        for i in range(len(X)):
            # One-hot encode labels
            y_true = [0] * 10
            y_true[Y[i]] = 1

            # Forward Propagation
            hidden1 = [sigmoid(sum(X[i][j] * w_hidden1[h][j] for j in range(784)) + b_hidden1[h]) for h in range(128)]
            hidden2 = [sigmoid(sum(hidden1[h] * w_hidden2[h2][h] for h in range(128)) + b_hidden2[h2]) for h2 in range(64)]
            output = [sigmoid(sum(hidden2[h2] * w_output[o][h2] for h2 in range(64)) + b_output[o]) for o in range(10)]

            # Compute Loss
            error = [y_true[o] - output[o] for o in range(10)]
            loss = sum(0.5 * e ** 2 for e in error)
            total_loss += loss

            # Backpropagation
            d_output = [error[o] * sigmoid_derivative(output[o]) for o in range(10)]
            d_hidden2 = [sum(d_output[o] * w_output[o][h2] for o in range(10)) * sigmoid_derivative(hidden2[h2]) for h2 in range(64)]
            d_hidden1 = [sum(d_hidden2[h2] * w_hidden2[h2][h] for h2 in range(64)) * sigmoid_derivative(hidden1[h]) for h in range(128)]

            # Update Weights
            for o in range(10):
                for h2 in range(64):
                    w_output[o][h2] += learning_rate * d_output[o] * hidden2[h2]
                b_output[o] += learning_rate * d_output[o]

            for h2 in range(64):
                for h in range(128):
                    w_hidden2[h2][h] += learning_rate * d_hidden2[h2] * hidden1[h]
                b_hidden2[h2] += learning_rate * d_hidden2[h2]

            for h in range(128):
                for j in range(784):
                    w_hidden1[h][j] += learning_rate * d_hidden1[h] * X[i][j]
                b_hidden1[h] += learning_rate * d_hidden1[h]

        if epoch % 10 == 0:
            print(f"Epoch {epoch}, Loss: {total_loss / len(X)}")

    return w_hidden1, w_hidden2, w_output, b_hidden1, b_hidden2, b_output

# Predict function
def predict_number(image, w_hidden1, w_hidden2, w_output, b_hidden1, b_hidden2, b_output):
    hidden1 = [sigmoid(sum(image[j] * w_hidden1[h][j] for j in range(784)) + b_hidden1[h]) for h in range(128)]
    hidden2 = [sigmoid(sum(hidden1[h] * w_hidden2[h2][h] for h in range(128)) + b_hidden2[h2]) for h2 in range(64)]
    output = [sigmoid(sum(hidden2[h2] * w_output[o][h2] for h2 in range(64)) + b_output[o]) for o in range(10)]
    return output.index(max(output))

# Load MNIST Dataset
X_train = load_mnist_images("train-images.idx3-ubyte")[:1000]  
Y_train = load_mnist_labels("train-labels.idx1-ubyte")[:1000]  

# Train Model
w_hidden1, w_hidden2, w_output, b_hidden1, b_hidden2, b_output = train_network(X_train, Y_train)

# Test Model
X_test = load_mnist_images("t10k-images.idx3-ubyte")[:10]
Y_test = load_mnist_labels("t10k-labels.idx1-ubyte")[:10]

for i in range(10):
    pred = predict_number(X_test[i], w_hidden1, w_hidden2, w_output, b_hidden1, b_hidden2, b_output)
    print(f"Actual: {Y_test[i]}, Predicted: {pred}")
