#include <iostream>
using namespace std;

// Function to print even numbers 2 to 20 using for loop
void printFor() {
    cout << "Using for loop: ";
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Function to print even numbers 2 to 20 using while loop
void printWhile() {
    cout << "Using while loop: ";
    int i = 2;
    while (i <= 20) {
        cout << i << " ";
        i += 2;
    }
    cout << endl;
}

// Function to print even numbers 2 to 20 using do-while loop
void printDoWhile() {
    cout << "Using do-while loop: ";
    int i = 2;
    do {
        cout << i << " ";
        i += 2;
    } while (i <= 20);
    cout << endl;
}

int main() {
    printFor();
    printWhile();
    printDoWhile();
    return 0;
}
