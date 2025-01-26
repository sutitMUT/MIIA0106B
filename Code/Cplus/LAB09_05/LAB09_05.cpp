#include <iostream>
#include <string>
using namespace std;

// คลาสสำหรับนักศึกษา
class Student {
private:
    string studentID; // รหัสนักศึกษา
    string nickname;  // ชื่อเล่น

public:
    // ฟังก์ชัน Setter สำหรับตั้งค่าข้อมูล
    void setStudentID(const string& id) { studentID = id; }
    void setNickname(const string& name) { nickname = name; }

    // ฟังก์ชัน Getter สำหรับดึงข้อมูล
    string getStudentID() const { return studentID; }
    string getNickname() const { return nickname; }

    // ฟังก์ชันสำหรับแสดงข้อมูลนักศึกษา
    void displayInfo() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Student student1, student2;

    // กำหนดข้อมูลนักศึกษา 1
    student1.setStudentID("64001");
    student1.setNickname("Tom");

    // กำหนดข้อมูลนักศึกษา 2
    student2.setStudentID("64002");
    student2.setNickname("Jerry");

    // แสดงข้อมูลนักศึกษา
    cout << "=== Student 1 ===" << endl;
    student1.displayInfo();

    cout << "=== Student 2 ===" << endl;
    student2.displayInfo();

    return 0;
}


