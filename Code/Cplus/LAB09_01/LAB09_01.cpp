#include <iostream>
#include <string>
using namespace std;

// �ç���ҧ����Ѻ�Ѵ�红����Źѡ�֡��
struct Student {
	string studentID;
	string nickname;
	string lineID;
	string phoneNumber;
};

// �ѧ��ѹ����Ѻ�Ѻ�����Źѡ�֡��
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

// �ѧ��ѹ����Ѻ�ʴ������Źѡ�֡��
void displayStudentData(const Student& student) {
	cout << "Student ID: " << student.studentID << endl;
	cout << "Nickname: " << student.nickname << endl;
	cout << "LINE ID: " << student.lineID << endl;
	cout << "Phone Number: " << student.phoneNumber << endl;
	cout << "-----------------------------" << endl;
}

int main() {
	Student student;

	// �Ѻ�����Źѡ�֡��
	cout << "=== Input Student Data ===" << endl;
	inputStudentData(student);

	// �ʴ������Źѡ�֡��
	cout << "\n=== Display Student Data ===" << endl;
	displayStudentData(student);

	// �Ѻ 5 ��
	
	//const int numStudents = 5; // �ӹǹ�ͧ�ѡ�֡��
	//Student students[numStudents];

	//// �Ѻ�����Źѡ�֡��
	//cout << "=== Input Student Data ===" << endl;
	//for (int i = 0; i < numStudents; ++i) {
	//	cout << "\nStudent " << i + 1 << "\n";
	//	inputStudentData(students[i]);
	//}

	//// �ʴ������Źѡ�֡��
	//cout << "\n=== Display Student Data ===" << endl;
	//for (int i = 0; i < numStudents; ++i) {
	//	cout << "\nStudent " << i + 1 << "\n";
	//	displayStudentData(students[i]);
	//}

	return 0;
}
