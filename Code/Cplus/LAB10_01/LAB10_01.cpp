#include <iostream>
using namespace std;

class BankAccount {
public :
	string bankName;
private:
	string owner;     // ชื่อเจ้าของบัญชี
	double balance;   // ยอดเงิน (private)

public:
	// Constructor
	BankAccount(string ownerName, double initialBalance) {
		owner = ownerName;
		balance = (initialBalance >= 0) ? initialBalance : 0; // ตรวจสอบยอดเงินตั้งต้น
	}

	// Method สำหรับฝากเงิน
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposited: " << amount << "\n";
		}
		else {
			cout << "Invalid deposit amount!\n";
		}
	}

	// Method สำหรับถอนเงิน
	void withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			cout << "Withdrawn: " << amount << "\n";
		}
		else {
			cout << "Invalid withdrawal amount!\n";
		}
	}

	// Method สำหรับดูยอดเงิน
	double get_balance() {
		return balance;
	}
	// Method owner
	string get_owner() {
		return owner;
	}
};

int main() {
	BankAccount account("Alice", 1000.0);
	account.bankName = "KTB";
	cout << "Initial Balance: " << account.get_balance() << "\n";
	account.deposit(500.0);
	account.withdraw(300.0);
	account.withdraw(2000.0); // เกินยอดเงินในบัญชี
	cout << "Final Balance: " << account.get_balance() << "\n";
	//แสดงข้อมูล 
	cout << "Bank Name: " << account.bankName << "\n";
	cout << "Owner: " << account.get_owner() << "\n";
	cout << "Balance: " << account.get_balance() << "\n";


	return 0;
}
