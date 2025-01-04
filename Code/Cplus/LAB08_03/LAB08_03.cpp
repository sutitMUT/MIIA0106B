#include <iostream>
#include <string>
using namespace std;

struct Student {
	string studentID;
	string nickname;
	string lineID;
	string phoneNumber;
} students[5];  // ประกาศตัวแปรโครงสร้างทันที

int main() {
	// รับข้อมูลสำหรับนักศึกษา 5 คน
	for (int i = 0; i < 5; i++) {
		cout << "Enter information for student " << i + 1 << ":" << endl;
		cout << "Student ID: ";
		cin >> students[i].studentID;
		cout << "Nickname: ";
		cin >> students[i].nickname;
		cout << "Line ID: ";
		cin >> students[i].lineID;
		cout << "Phone Number: ";
		cin >> students[i].phoneNumber;
		cout << endl;
	}

	// แสดงผลข้อมูลนักศึกษา
	cout << "Student Information:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Student " << i + 1 << ":" << endl;
		cout << "  Student ID: " << students[i].studentID << endl;
		cout << "  Nickname: " << students[i].nickname << endl;
		cout << "  Line ID: " << students[i].lineID << endl;
		cout << "  Phone Number: " << students[i].phoneNumber << endl;
		cout << endl;
	}

	return 0;
}
