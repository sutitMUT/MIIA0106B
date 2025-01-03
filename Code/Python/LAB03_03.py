# Function to calculate the sum of numbers from 1 to 100 using for loop
def sum_using_for():
    total = 0
    for i in range(1, 101):
        total += i
    return total

# Function to calculate the sum of numbers from 1 to 100 using while loop
def sum_using_while():
    total = 0
    i = 1
    while i <= 100:
        total += i
        i += 1
    return total

# Function to calculate the sum of numbers from 1 to 100 using do-while loop
def sum_using_do_while():
    total = 0
    i = 1
    while True:
        total += i
        i += 1
        if i > 100:
            break
    return total

def main():
    print("Sum using for loop:", sum_using_for())
    print("Sum using while loop:", sum_using_while())
    print("Sum using do-while loop:", sum_using_do_while())

if __name__ == "__main__":
    main()
