def add(a, b):
    return a + b
def subtract(a, b):
    return a - b
def multiply(a, b):
    return a * b
def divide(a, b):
    if b == 0:
        print("Error: Division by zero!")
        return 0
    return a / b

def sum_recursive(n):
    if n == 0:
        return 0
    return n + sum_recursive(n - 1)

def main():
    username = input("Enter username: ")
    password = input("Enter password: ")

    if username != "admin" or password != "admin":
        print("Invalid username or password!")
        return

    while True:
        print("\nMenu:")
        print("1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers")
        print("4. Divide Numbers\n5. Calculate Rectangle Area")
        print("6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)")
        print("8. Display 1-N (Do While Loop Emulation)")
        print("9. Sum 1-N (For Loop)\n10. Sum 1-N (Recursive)")
        print("Q/q. Quit")
        choice = input("Enter your choice: ")

        if choice in ['1', '2', '3', '4']:
            a = float(input("Enter first number: "))
            b = float(input("Enter second number: "))
            if choice == '1':
                print("Result:", add(a, b))
            elif choice == '2':
                print("Result:", subtract(a, b))
            elif choice == '3':
                print("Result:", multiply(a, b))
            elif choice == '4':
                print("Result:", divide(a, b))
        elif choice == '5':
            width = float(input("Enter width: "))
            height = float(input("Enter height: "))
            print("Area:", multiply(width, height))
        elif choice == '6':
            n = int(input("Enter N: "))
            for i in range(1, n + 1):
                print(i, end=" ")
            print()
        elif choice == '7':
            n = int(input("Enter N: "))
            i = 1
            while i <= n:
                print(i, end=" ")
                i += 1
            print()
        elif choice == '8':
            n = int(input("Enter N: "))
            i = 1
            while True:
                print(i, end=" ")
                i += 1
                if i > n:
                    break
            print()
        elif choice == '9':
            n = int(input("Enter N: "))
            total = sum(range(1, n + 1))
            print("Sum:", total)
        elif choice == '10':
            n = int(input("Enter N: "))
            print("Sum:", sum_recursive(n))
        elif choice.lower() == 'q':
            print("Goodbye!")
            break
        else:
            print("Invalid choice. Try again!")
if __name__ == "__main__":
    main()
