#include <iostream>
using namespace std;

int factorial(int n) {
	cout << "Factorial of : " << n << endl;

	if (n == 0) return 1; // เงื่อนไขหยุด

	int result = n * factorial(n - 1); // คำนวณ Factorial
	cout << n << " * factorial(" << n - 1 << ") = " << result << endl; // แสดงผลคูณ
	return result;
}

int factorial_NonRecursive(int n) {
	int result = 1; // ค่าเริ่มต้น
	for (int i = 1; i <= n; i++) {

		result *= i; // คูณค่าของ result ด้วย i ทีละขั้น
		cout << "Factorial of : " << i << "=" << result << endl;
	}
	return result;
}


int factorial0(int n) {
	cout << "Factorial of : " << n << endl;

	if (n == 0) return 1;

	int result = n;
	cout << n << " * factorial(" << n - 1 << ") = " << result << endl;
	return result;
}

int factorial1(int n) {
	cout << "Factorial of : " << n << endl;

	if (n == 0) return 1;

	int result = n * factorial0(n - 1);
	cout << n << " * factorial(" << n - 1 << ") = " << result << endl;
	return result;
}

int factorial2(int n) {
	cout << "Factorial of : " << n << endl;

	if (n == 0) return 1;
	int result = n;
	result = n * factorial1(n - 1);
	cout << n << " * factorial(" << n - 1 << ") = " << result << endl;
	return result;
}
int main() {
	cout << "Factorial of 5: " << factorial(5) << endl;
	cout << "factorial_NonRecursive of 5: " << factorial_NonRecursive(5) << endl;

	cout << "Factorial of 2: " << factorial2(2) << endl;
	return 0;
}
