#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string empID;
    float hoursWorked, hourlyRate, grossSalary, tax, netSalary;

    // Input data
    cout << "Enter employee ID: ";
    cin >> empID;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    // Calculate gross salary
    if (hoursWorked < 30) {
        grossSalary = hoursWorked * hourlyRate;
    }
    else {
        grossSalary = hoursWorked * (hourlyRate + 50);
    }

    // Calculate tax and net salary
    tax = 0.07 * grossSalary;
    netSalary = grossSalary - tax;

    // Display the results
    cout << fixed << setprecision(2); // Set to display 2 decimal places
    cout << "Employee ID: " << empID << endl;
    cout << "Gross salary: " << grossSalary << " THB" << endl;
    cout << "Tax to be paid: " << tax << " THB" << endl;
    cout << "Net salary: " << netSalary << " THB" << endl;

    return 0;
}
