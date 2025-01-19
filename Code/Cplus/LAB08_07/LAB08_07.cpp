#include <iostream>
<<<<<<< HEAD
#include <string>
using namespace std;

// โครงสร้างที่อยู่
struct Address {
	int houseNumber;
	int villageNumber;  // หมู่ที่
	string alley;       // ซอย
	string road;        // ถนน
	string province;    // จังหวัด
	string district;    // อำเภอ
	string subDistrict; // ตำบล
	string postalCode;  // รหัสไปรษณีย์
};

// โครงสร้างนักเรียน
struct Student {
	string idCard;       // เลขประจำตัวประชาชน
	string title;        // คำนำหน้าชื่อ
	string firstName;    // ชื่อ
	string lastName;     // นามสกุล
	string mobile;       // หมายเลขโทรศัพท์มือถือ
	string homePhone;    // หมายเลขโทรศัพท์บ้าน
	string email;        // อีเมล
	string grade;        // ชั้นที่กำลังศึกษา
	string school;       // โรงเรียน
	Address address;     // ที่อยู่ตามสำเนาทะเบียนบ้าน
};

// โครงสร้างผู้ปกครอง
struct Guardian {
	string title;       // คำนำหน้าชื่อ
	string firstName;   // ชื่อ
	string lastName;    // นามสกุล
	string mobile;      // หมายเลขโทรศัพท์มือถือ
	string homePhone;   // หมายเลขโทรศัพท์บ้าน
	string relation;    // ความเกี่ยวข้องกับนักเรียน
};

// โครงสร้างแบบสอบถาม
struct Survey {
	bool friendInfo;       // ได้รับข้อมูลจากเพื่อน
	bool guardianInfo;     // ได้รับข้อมูลจากผู้ปกครอง
	bool schoolWebsite;    // ได้รับข้อมูลจากเว็บไซต์โรงเรียน
	bool parentAssocWebsite; // ได้รับข้อมูลจากเว็บไซต์สมาคมผู้ปกครอง
	bool facebook;         // ได้รับข้อมูลจาก Facebook
	bool youtube;          // ได้รับข้อมูลจาก Youtube
	bool others;           // ได้รับข้อมูลจากอื่นๆ
	string otherSource;    // รายละเอียดของ "อื่นๆ"
};

// โครงสร้างข้อมูลหลัก
struct StudentInfo {
	Student student;       // ข้อมูลนักเรียน
	Guardian guardian;     // ข้อมูลผู้ปกครอง
	Survey survey;         // ข้อมูลแบบสอบถาม
};

int main() {
	StudentInfo studentInfo;

	// ป้อนข้อมูลตัวอย่าง
	studentInfo.student.idCard = "1234567890123";
	studentInfo.student.title = "Mr.";
	studentInfo.student.firstName = "Somchai";
	studentInfo.student.lastName = "Prasert";
	studentInfo.student.mobile = "0812345678";
	studentInfo.student.email = "somchai@example.com";
	studentInfo.student.grade = "M.6";
	studentInfo.student.school = "Bangkok High School";

	// ป้อนข้อมูลที่อยู่
	studentInfo.student.address.houseNumber = 123;
	studentInfo.student.address.villageNumber = 4;
	studentInfo.student.address.alley = "Soi Sukhumvit 10";
	studentInfo.student.address.road = "Sukhumvit";
	studentInfo.student.address.province = "Bangkok";
	studentInfo.student.address.district = "Bangna";
	studentInfo.student.address.subDistrict = "Bangna Tai";
	studentInfo.student.address.postalCode = "10260";

	// แสดงผล
	cout << "Student Name: " << studentInfo.student.title << " "
		<< studentInfo.student.firstName << " "
		<< studentInfo.student.lastName << endl;
	cout << "Mobile: " << studentInfo.student.mobile << endl;
	cout << "Address: " << studentInfo.student.address.houseNumber
		<< " " << studentInfo.student.address.alley
		<< ", " << studentInfo.student.address.district
		<< ", " << studentInfo.student.address.province
		<< " " << studentInfo.student.address.postalCode << endl;

	return 0;
=======
using namespace std;

// กำหนดโครงสร้าง struct
struct Student {
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};

int main() {
    Student students[5]; // สร้างอาร์เรย์ของ struct ขนาด 5

    // รับข้อมูลนักศึกษา
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

    // แสดงข้อมูลนักศึกษา
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
>>>>>>> origin/main
}
