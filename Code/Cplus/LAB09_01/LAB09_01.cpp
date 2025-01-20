#include <iostream>
#include <string>
using namespace std;

// โครงสร้างสำหรับจัดเก็บข้อมูลนักศึกษา
struct Student {
	string studentID;
	string nickname;
	string lineID;
	string phoneNumber;
};

// ฟังก์ชันสำหรับรับข้อมูลนักศึกษา
void inputStudentData(Student& student) {
	cout << "Enter Student ID: ";
	getline(cin, student.studentID);
	cout << "Enter Nickname: ";
	getline(cin, student.nickname);
	cout << "Enter LINE ID: ";
	getline(cin, student.lineID);
	cout << "Enter Phone Number: ";
	getline(cin, student.phoneNumber);
}

// ฟังก์ชันสำหรับแสดงข้อมูลนักศึกษา
void displayStudentData(const Student& student) {
	cout << "Student ID: " << student.studentID << endl;
	cout << "Nickname: " << student.nickname << endl;
	cout << "LINE ID: " << student.lineID << endl;
	cout << "Phone Number: " << student.phoneNumber << endl;
	cout << "-----------------------------" << endl;
}

int main() {
	Student student;

	// รับข้อมูลนักศึกษา
	cout << "=== Input Student Data ===" << endl;
	inputStudentData(student);

	// แสดงข้อมูลนักศึกษา
	cout << "\n=== Display Student Data ===" << endl;
	displayStudentData(student);

	// รับ 5 คน
	
	//const int numStudents = 5; // จำนวนของนักศึกษา
	//Student students[numStudents];

	//// รับข้อมูลนักศึกษา
	//cout << "=== Input Student Data ===" << endl;
	//for (int i = 0; i < numStudents; ++i) {
	//	cout << "\nStudent " << i + 1 << "\n";
	//	inputStudentData(students[i]);
	//}

	//// แสดงข้อมูลนักศึกษา
	//cout << "\n=== Display Student Data ===" << endl;
	//for (int i = 0; i < numStudents; ++i) {
	//	cout << "\nStudent " << i + 1 << "\n";
	//	displayStudentData(students[i]);
	//}

	return 0;
}
