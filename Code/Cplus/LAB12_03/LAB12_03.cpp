#include <iostream>
#include <fstream>
#include <string>   // ไลบรารีที่มีฟังก์ชัน getline()
using namespace std;

int main() {
	fstream file("example.txt", ios::in | ios::out | ios::app);  // เปิดไฟล์แบบอ่านและเขียน

	if (file.is_open()) {

		file << "1 Appending new data...\n";  // เพิ่มข้อมูลใหม่ลงไปที่ท้ายไฟล์
		file.seekg(0);  // เลื่อนตำแหน่งไปจุดเริ่มต้นของไฟล์
		file << "2 Appending new data...\n";  // เพิ่มข้อมูลใหม่ลงไปที่ท้ายไฟล์
		file.seekg(0);  // เลื่อนตำแหน่งไปจุดเริ่มต้นของไฟล์

		string text;
		while (getline(file, text)) {  // อ่านไฟล์
			cout << text << endl;
		}

		file.close();
	}
	else {
		cout << "Error opening file!" << endl;
	}

	return 0;
}
