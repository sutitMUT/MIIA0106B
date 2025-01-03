# Function to print even numbers 2 to 20 using for loop
def print_for():
    print("Using for loop: ", end="")
    for i in range(2, 21, 2):
        print(i, end=" ")
    print()

# Function to print even numbers 2 to 20 using while loop
def print_while():
    print("Using while loop: ", end="")
    i = 2
    while i <= 20:
        print(i, end=" ")
        i += 2
    print()

# Function to print even numbers 2 to 20 using do-while loop
def print_do_while():
    print("Using do-while loop: ", end="")
    i = 2
    while True:
        print(i, end=" ")
        i += 2
        if i > 20:
            break
    print()

def main():
    print_for()
    print_while()
    print_do_while()

if __name__ == "__main__":
    main()
