import math

# Function: Sigmoid Activation
def sigmoid(x):
    return 1 / (1 + math.exp(-x))

# Function: Sigmoid Derivative (for backpropagation)
def sigmoid_derivative(x):
    return x * (1 - x)

# Function: Read Image and Convert to Binary Pixels
def read_image(image_path):
    from PIL import Image  # ใช้แค่โหลดภาพเท่านั้น
    img = Image.open(image_path).convert('L')  # แปลงเป็น grayscale
    img = img.resize((28, 28))  # ปรับขนาดให้เหมาะสม
    pixels = list(img.getdata())
    return [p / 255.0 for p in pixels]  # แปลงเป็น 0-1

# Function: Train Neural Network
def train_network(X, Y, epochs=10000, learning_rate=0.5):
    import random
    random.seed(42)

    # Initialize weights randomly (-1 to 1)
    w_hidden = [[random.uniform(-1, 1) for _ in range(28*28)] for _ in range(16)]
    w_output = [random.uniform(-1, 1) for _ in range(16)]
    b_hidden = [random.uniform(-1, 1) for _ in range(16)]
    b_output = random.uniform(-1, 1)

    for epoch in range(epochs):
        total_loss = 0

        for i in range(len(X)):
            # Forward Pass
            hidden_layer = [sigmoid(sum(X[i][j] * w_hidden[h][j] for j in range(28*28)) + b_hidden[h]) for h in range(16)]
            output = sigmoid(sum(hidden_layer[h] * w_output[h] for h in range(16)) + b_output)

            # Compute Loss
            error = Y[i] - output
            loss = 0.5 * error ** 2
            total_loss += loss

            # Backpropagation
            d_output = error * sigmoid_derivative(output)
            d_hidden = [d_output * w_output[h] * sigmoid_derivative(hidden_layer[h]) for h in range(16)]

            # Update weights and biases
            for h in range(16):
                w_output[h] += learning_rate * d_output * hidden_layer[h]
                for j in range(28*28):
                    w_hidden[h][j] += learning_rate * d_hidden[h] * X[i][j]
                b_hidden[h] += learning_rate * d_hidden[h]

            b_output += learning_rate * d_output

        if epoch % 1000 == 0:
            print(f"Epoch {epoch}, Loss: {total_loss / len(X)}")

    return w_hidden, w_output, b_hidden, b_output

# Load Image and Predict
def predict_number(image_path, w_hidden, w_output, b_hidden, b_output):
    X = read_image(image_path)
    hidden_layer = [sigmoid(sum(X[j] * w_hidden[h][j] for j in range(28*28)) + b_hidden[h]) for h in range(16)]
    output = sigmoid(sum(hidden_layer[h] * w_output[h] for h in range(16)) + b_output)
    return round(output * 9)  # Map 0-1 to digit 0-9

# Example Usage
X_train = [read_image("digit_0.png"), read_image("digit_1.png")]  # ตัวอย่างภาพที่โหลด
Y_train = [0, 1]  # เลเบลของภาพ
w_hidden, w_output, b_hidden, b_output = train_network(X_train, Y_train)

predicted = predict_number("test_digit.png", w_hidden, w_output, b_hidden, b_output)
print(f"Predicted Digit: {predicted}")
