#include <iostream>
using namespace std;

// Function to calculate the sum of numbers from 1 to 100 using for loop
int sumUsingFor() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    return sum;
}

// Function to calculate the sum of numbers from 1 to 100 using while loop
int sumUsingWhile() {
    int sum = 0, i = 1;
    while (i <= 100) {
        sum += i;
        i++;
    }
    return sum;
}

// Function to calculate the sum of numbers from 1 to 100 using do-while loop
int sumUsingDoWhile() {
    int sum = 0, i = 1;
    do {
        sum += i;
        i++;
    } while (i <= 100);
    return sum;
}

int main() {
    cout << "Sum using for loop: " << sumUsingFor() << endl;
    cout << "Sum using while loop: " << sumUsingWhile() << endl;
    cout << "Sum using do-while loop: " << sumUsingDoWhile() << endl;
    return 0;
}
