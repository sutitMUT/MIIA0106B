#include <iostream>
#include <string>
using namespace std;

// ��������Ѻ�Ѵ�红����Źѡ�֡��
class Student {
private:
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;

public:
    // �ѧ��ѹ����Ѻ�Ѻ�����Źѡ�֡��
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

    // �ѧ��ѹ����Ѻ�ʴ������Źѡ�֡��
    void displayStudentData() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "LINE ID: " << lineID << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Student student;

    // �Ѻ�����Źѡ�֡��
    cout << "=== Input Student Data ===" << endl;
    student.inputStudentData();

    // �ʴ������Źѡ�֡��
    cout << "\n=== Display Student Data ===" << endl;
    student.displayStudentData();

    return 0;
}
