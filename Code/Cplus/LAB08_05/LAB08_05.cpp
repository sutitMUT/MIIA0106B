#include <iostream>
#include <cstring> // สำหรับ strcpy
using namespace std;

// โครงสร้าง Address
struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
};

// โครงสร้าง Phone
struct Phone {
    char home[10];
    char mobile[10];
};

// โครงสร้าง Student
struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;
    Phone tel;
};

int main() {
    // สร้างตัวแปรนักศึกษา
    Student student;

    // รับข้อมูลนักศึกษา
    cout << "Enter Student Information:" << endl;

    cout << "ID: ";
    cin >> student.id;

    cout << "Name: ";
    cin >> student.name;

    cout << "Surname: ";
    cin >> student.surname;

    cout << "Address - House Number: ";
    cin >> student.addr.number;

    cout << "Address - Road: ";
    cin >> student.addr.road;

    cout << "Address - District: ";
    cin >> student.addr.district;

    cout << "Address - Province: ";
    cin >> student.addr.province;

    cout << "Phone - Home: ";
    cin >> student.tel.home;

    cout << "Phone - Mobile: ";
    cin >> student.tel.mobile;

    cout << endl;

    // แสดงข้อมูลนักศึกษา
    cout << "Student Information:" << endl;
    cout << "ID: " << student.id << endl;
    cout << "Name: " << student.name << endl;
    cout << "Surname: " << student.surname << endl;
    cout << "Address: " << student.addr.number << ", " << student.addr.road << ", "
        << student.addr.district << ", " << student.addr.province << endl;
    cout << "Phone (Home): " << student.tel.home << endl;
    cout << "Phone (Mobile): " << student.tel.mobile << endl;

    return 0;
}
