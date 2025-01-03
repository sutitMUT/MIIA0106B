#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    cout << "Please select a menu option:\n";
    cout << "1. Calculate the area of a rectangle\n";
    cout << "2. Calculate the volume of a rectangular prism\n";
    cout << "3. Calculate employee salary\n";
    cout << "Select: ";
    cin >> choice;

    if (choice == 1) {
        float width, length;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the length: ";
        cin >> length;
        cout << "The area of the rectangle is: " << width * length << endl;
    }
    else if (choice == 2) {
        float width, length, height;
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the height: ";
        cin >> height;
        cout << "The volume of the rectangular prism is: " << width * length * height << endl;
    }
    else if (choice == 3) {
        string empID;
        float hoursWorked, hourlyRate, grossSalary, tax, netSalary;

        cout << "Enter employee ID: ";
        cin >> empID;
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        cout << "Enter hourly rate: ";
        cin >> hourlyRate;

        if (hoursWorked < 30) {
            grossSalary = hoursWorked * hourlyRate;
        }
        else {
            grossSalary = hoursWorked * (hourlyRate + 50);
        }

        tax = 0.07 * grossSalary;
        netSalary = grossSalary - tax;

        cout << fixed << setprecision(2);
        cout << "Employee ID: " << empID << endl;
        cout << "Gross salary: " << grossSalary << " THB" << endl;
        cout << "Tax to be paid: " << tax << " THB" << endl;
        cout << "Net salary: " << netSalary << " THB" << endl;
    }
    else {
        cout << "Invalid menu option!" << endl;
    }

    return 0;
}
