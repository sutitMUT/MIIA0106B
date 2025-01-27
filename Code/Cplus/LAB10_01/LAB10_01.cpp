#include <iostream>
using namespace std;

class BankAccount {
public :
	string bankName;
private:
	string owner;     // ������Ңͧ�ѭ��
	double balance;   // �ʹ�Թ (private)

public:
	// Constructor
	BankAccount(string ownerName, double initialBalance) {
		owner = ownerName;
		balance = (initialBalance >= 0) ? initialBalance : 0; // ��Ǩ�ͺ�ʹ�Թ��駵�
	}

	// Method ����Ѻ�ҡ�Թ
	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposited: " << amount << "\n";
		}
		else {
			cout << "Invalid deposit amount!\n";
		}
	}

	// Method ����Ѻ�͹�Թ
	void withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			cout << "Withdrawn: " << amount << "\n";
		}
		else {
			cout << "Invalid withdrawal amount!\n";
		}
	}

	// Method ����Ѻ���ʹ�Թ
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
	account.withdraw(2000.0); // �Թ�ʹ�Թ㹺ѭ��
	cout << "Final Balance: " << account.get_balance() << "\n";
	//�ʴ������� 
	cout << "Bank Name: " << account.bankName << "\n";
	cout << "Owner: " << account.get_owner() << "\n";
	cout << "Balance: " << account.get_balance() << "\n";


	return 0;
}
