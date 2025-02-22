def safe_division():
    while True:
        try:
            # Get input numbers from the user
            num1 = float(input("🔢 Please enter the first number: "))
            num2 = float(input("🔢 Please enter the second number: "))

            # Check for division by zero
            result = num1 / num2  
            print(f"✅ Result: {result}")
            break  # Exit the loop if successful

        except ZeroDivisionError:
            print("❌ Error: Cannot divide by zero! Please enter a valid number.")

        except ValueError:
            print("❌ Error: Please enter only numeric values!")

# Run the function
safe_division()
