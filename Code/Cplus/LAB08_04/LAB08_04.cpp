#include <iostream>
#include <cstring> // สำหรับ strcpy

struct Student {
	char id[15];       // ใช้ char[] เก็บข้อความ
	char nickname[20];
};

int main() {
	Student students;

	// ใช้ strcpy คัดลอกข้อความเข้าไปใน char[]
	strcpy(students.id, "5411810006");
	strcpy(students.nickname, "Alice");

	// แสดงผล
	std::cout << "ID: " << students.id << std::endl;
	std::cout << "Nickname: " << students.nickname << std::endl;

	return 0;
}
