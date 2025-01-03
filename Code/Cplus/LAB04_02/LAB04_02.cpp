#include <iostream>
#include <string>
using namespace std;

// Regular Function สำหรับการคำนวณพื้นฐาน
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

// Recursive Function สำหรับการบวกเลข 1 ถึง N
int sum_recursive(int n) {
    if (n == 0) return 0;
    return n + sum_recursive(n - 1);
}

// Main Function
int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username != "admin" || password != "admin") {
        cout << "Invalid username or password!" << endl;
        return 0;
    }

    char choice;
    do {
        // แสดงเมนู
        cout << "\nMenu:\n";
        cout << "1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers\n";
        cout << "4. Divide Numbers\n5. Calculate Rectangle Area\n";
        cout << "6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)\n";
        cout << "8. Display 1-N (Do While Loop)\n";
        cout << "9. Sum 1-N (For Loop)\n10. Sum 1-N (Recursive)\n";
        cout << "Q/q. Quit\nEnter your choice: ";
        cin >> choice;

        if (choice == '1' || choice == '2' || choice == '3' || choice == '4') {
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            switch (choice) {
            case '1': cout << "Result: " << add(a, b) << endl; break;
            case '2': cout << "Result: " << subtract(a, b) << endl; break;
            case '3': cout << "Result: " << multiply(a, b) << endl; break;
            case '4': cout << "Result: " << divide(a, b) << endl; break;
            }
        }
        else if (choice == '5') {
            double width, height;
            cout << "Enter width and height: ";
            cin >> width >> height;
            cout << "Area: " << multiply(width, height) << endl;
        }
        else if (choice == '6' || choice == '7' || choice == '8') {
            int n;
            cout << "Enter N: ";
            cin >> n;

            if (choice == '6') {
                for (int i = 1; i <= n; i++) cout << i << " ";
                cout << endl;
            }
            else if (choice == '7') {
                int i = 1;
                while (i <= n) cout << i++ << " ";
                cout << endl;
            }
            else if (choice == '8') {
                int i = 1;
                do {
                    cout << i << " ";
                    i++;
                } while (i <= n);
                cout << endl;
            }
        }
        else if (choice == '9') {
            int n, sum = 0;
            cout << "Enter N: ";
            cin >> n;
            for (int i = 1; i <= n; i++) sum += i;
            cout << "Sum: " << sum << endl;
        }
        else if (choice == '10') {
            int n;
            cout << "Enter N: ";
            cin >> n;
            cout << "Sum: " << sum_recursive(n) << endl;
        }
        else if (choice == 'Q' || choice == 'q') {
            cout << "Goodbye!" << endl;
        }
        else {
            cout << "Invalid choice. Try again!" << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}
