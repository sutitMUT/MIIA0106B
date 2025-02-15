#include <iostream>
#include <fstream>  // ใช้สำหรับอ่านไฟล์
#include <string>   // ไลบรารีที่มีฟังก์ชัน getline()
using namespace std;

int main() {

    ofstream outFile("example.txt"); // เปิดไฟล์เพื่อเขียน (ถ้าไม่มีไฟล์ ระบบจะสร้างให้)

    if (outFile.is_open()) {  // ตรวจสอบว่าเปิดไฟล์สำเร็จหรือไม่
        outFile << "Hello, C++ File Handling!" << endl; // เขียนข้อมูลลงไฟล์
        outFile << "Hello 1, C++ File Handling!" << endl; // เขียนข้อมูลลงไฟล์
        outFile << "Hello 2, C++ File Handling!" << endl; // เขียนข้อมูลลงไฟล์
        outFile.close();  // ปิดไฟล์เมื่อเขียนเสร็จ
        cout << "Data saved successfully!" << endl;
    }
    else {
        cout << "Error opening file!" << endl;
    }

    ifstream inFile("example.txt");  // เปิดไฟล์เพื่ออ่าน
    string text;

    if (inFile.is_open()) {
        while (getline(inFile, text)) {  // อ่านทีละบรรทัด
            cout << text << endl;
        }
        inFile.close();  // ปิดไฟล์
    }
    else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
