#include <iostream>
#include <string>
using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int sum_recursive(int n);
void display_numbers_for(int n);
void display_numbers_while(int n);
void display_numbers_do_while(int n);
void sum_numbers_for(int n);

int main() {
	string username, password;

	// Register a new account
	cout << "Register a new account" << endl;
	cout << "Set your username: ";
	cin >> username;
	cout << "Set your password: ";
	cin >> password;

	cout << "\nAccount created successfully! Please log in." << endl;
	string login_username, login_password;
	do {
		cout << "Enter username: ";
		cin >> login_username;
		cout << "Enter password: ";
		cin >> login_password;

		if (login_username == username && login_password == password) {
			cout << "Login successful!" << endl;
			break;
		}
		else {
			cout << "Invalid username or password. Try again." << endl;
		}
	} while (true);

	char choice;
	do {
		cout << "\nMenu:" << endl;
		cout << "1. Add Numbers\n2. Subtract Numbers\n3. Multiply Numbers" << endl;
		cout << "4. Divide Numbers\n5. Calculate Rectangle Area" << endl;
		cout << "6. Display 1-N (For Loop)\n7. Display 1-N (While Loop)" << endl;
		cout << "8. Display 1-N (Do While Loop)\n9. Sum 1-N (For Loop)" << endl;
		cout << "10. Sum 1-N (Recursive)\nQ/q. Quit" << endl;
		cout << "Enter your choice: ";
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
		else if (choice == '6') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			display_numbers_for(n);
		}
		else if (choice == '7') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			display_numbers_while(n);
		}
		else if (choice == '8') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			display_numbers_do_while(n);
		}
		else if (choice == '9') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			sum_numbers_for(n);
		}
		else if (choice == '10') {
			int n;
			cout << "Enter N: ";
			cin >> n;
			cout << "Sum: " << sum_recursive(n) << endl;
		}
		else if (choice == 'Q' || choice == 'q') {
			cout << "Goodbye!" << endl;
			break;
		}
		else {
			cout << "Invalid choice. Try again!" << endl;
		}
	} while (true);

	return 0;
}

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

int sum_recursive(int n) {
	if (n == 0) return 0;
	return n + sum_recursive(n - 1);
}

void display_numbers_for(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	cout << endl;
}

void display_numbers_while(int n) {
	int i = 1;
	while (i <= n) {
		cout << i << " ";
		i++;
	}
	cout << endl;
}

void display_numbers_do_while(int n) {
	int i = 1;
	do {
		cout << i << " ";
		i++;
	} while (i <= n);
	cout << endl;
}

void sum_numbers_for(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "Sum: " << sum << endl;
}
