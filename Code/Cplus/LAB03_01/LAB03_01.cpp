#include <iostream>
using namespace std;

// Function to print numbers 1 to 10 using for loop
void printFor() {
    cout << "Using for loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Function to print numbers 1 to 10 using while loop
void printWhile() {
    cout << "Using while loop: ";
    int i = 1;
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

// Function to print numbers 1 to 10 using do-while loop
void printDoWhile() {
    cout << "Using do-while loop: ";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
}

int main() {
    printFor();
    printWhile();
    printDoWhile();
    return 0;
}
