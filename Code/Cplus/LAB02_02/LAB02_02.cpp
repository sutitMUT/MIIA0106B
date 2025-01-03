#include <iostream>
using namespace std;

int main() {
    float width, length, area;

    // Input width and length
    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the length: ";
    cin >> length;

    // Calculate the area
    area = width * length;

    // Display the result
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
