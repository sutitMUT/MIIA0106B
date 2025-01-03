# Function to print numbers 1 to 10 using for loop
def print_for():
    print("Using for loop: ", end="")
    for i in range(1, 11):
        print(i, end=" ")
    print()

# Function to print numbers 1 to 10 using while loop
def print_while():
    print("Using while loop: ", end="")
    i = 1
    while i <= 10:
        print(i, end=" ")
        i += 1
    print()

# Function to print numbers 1 to 10 using do-while loop
def print_do_while():
    print("Using do-while loop: ", end="")
    i = 1
    while True:
        print(i, end=" ")
        i += 1
        if i > 10:
            break
    print()

def main():
    print_for()
    print_while()
    print_do_while()

if __name__ == "__main__":
    main()
