#include <iostream>
#include <string>
using namespace std;

// คลาสสำหรับจัดเก็บข้อมูลนักศึกษา
class Student {
private:
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;

public:
    // ฟังก์ชันสำหรับรับข้อมูลนักศึกษา
    void inputStudentData() {
        cout << "Enter Student ID: ";
        getline(cin, studentID);
        cout << "Enter Nickname: ";
        getline(cin, nickname);
        cout << "Enter LINE ID: ";
        getline(cin, lineID);
        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);
    }

    // ฟังก์ชันสำหรับแสดงข้อมูลนักศึกษา
    void displayStudentData() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "LINE ID: " << lineID << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    const int numStudents = 5; // จำนวนของนักศึกษา
    Student students[numStudents];

    // รับข้อมูลนักศึกษา
    cout << "=== Input Student Data ===" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << "\n";
        students[i].inputStudentData();
    }

    // แสดงข้อมูลนักศึกษา
    cout << "\n=== Display Student Data ===" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nStudent " << i + 1 << "\n";
        students[i].displayStudentData();
    }

    return 0;
}
