#include <iostream>
using namespace std;

int main() {
    float width, length, height, volume;

    // Input width, length, and height
    cout << "Enter the width: ";
    cin >> width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the height: ";
    cin >> height;

    // Calculate the volume
    volume = width * length * height;

    // Display the result
    cout << "The volume of the rectangular prism is: " << volume << endl;

    return 0;
}
