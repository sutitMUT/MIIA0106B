#include <iostream>
<<<<<<< HEAD
#include <string>
using namespace std;

// �ç���ҧ�������
struct Address {
	int houseNumber;
	int villageNumber;  // ������
	string alley;       // ���
	string road;        // ���
	string province;    // �ѧ��Ѵ
	string district;    // �����
	string subDistrict; // �Ӻ�
	string postalCode;  // ������ɳ���
};

// �ç���ҧ�ѡ���¹
struct Student {
	string idCard;       // �Ţ��Шӵ�ǻ�ЪҪ�
	string title;        // �ӹ�˹�Ҫ���
	string firstName;    // ����
	string lastName;     // ���ʡ��
	string mobile;       // �����Ţ���Ѿ����Ͷ��
	string homePhone;    // �����Ţ���Ѿ���ҹ
	string email;        // �����
	string grade;        // ��鹷����ѧ�֡��
	string school;       // �ç���¹
	Address address;     // ������������ҷ���¹��ҹ
};

// �ç���ҧ��黡��ͧ
struct Guardian {
	string title;       // �ӹ�˹�Ҫ���
	string firstName;   // ����
	string lastName;    // ���ʡ��
	string mobile;      // �����Ţ���Ѿ����Ͷ��
	string homePhone;   // �����Ţ���Ѿ���ҹ
	string relation;    // ��������Ǣ�ͧ�Ѻ�ѡ���¹
};

// �ç���ҧẺ�ͺ���
struct Survey {
	bool friendInfo;       // ���Ѻ�����Ũҡ���͹
	bool guardianInfo;     // ���Ѻ�����Ũҡ��黡��ͧ
	bool schoolWebsite;    // ���Ѻ�����Ũҡ���䫵��ç���¹
	bool parentAssocWebsite; // ���Ѻ�����Ũҡ���䫵���Ҥ���黡��ͧ
	bool facebook;         // ���Ѻ�����Ũҡ Facebook
	bool youtube;          // ���Ѻ�����Ũҡ Youtube
	bool others;           // ���Ѻ�����Ũҡ����
	string otherSource;    // ��������´�ͧ "����"
};

// �ç���ҧ��������ѡ
struct StudentInfo {
	Student student;       // �����Źѡ���¹
	Guardian guardian;     // �����ż�黡��ͧ
	Survey survey;         // ������Ẻ�ͺ���
};

int main() {
	StudentInfo studentInfo;

	// ��͹�����ŵ�����ҧ
	studentInfo.student.idCard = "1234567890123";
	studentInfo.student.title = "Mr.";
	studentInfo.student.firstName = "Somchai";
	studentInfo.student.lastName = "Prasert";
	studentInfo.student.mobile = "0812345678";
	studentInfo.student.email = "somchai@example.com";
	studentInfo.student.grade = "M.6";
	studentInfo.student.school = "Bangkok High School";

	// ��͹�����ŷ������
	studentInfo.student.address.houseNumber = 123;
	studentInfo.student.address.villageNumber = 4;
	studentInfo.student.address.alley = "Soi Sukhumvit 10";
	studentInfo.student.address.road = "Sukhumvit";
	studentInfo.student.address.province = "Bangkok";
	studentInfo.student.address.district = "Bangna";
	studentInfo.student.address.subDistrict = "Bangna Tai";
	studentInfo.student.address.postalCode = "10260";

	// �ʴ���
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

// ��˹��ç���ҧ struct
struct Student {
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};

int main() {
    Student students[5]; // ���ҧ��������ͧ struct ��Ҵ 5

    // �Ѻ�����Źѡ�֡��
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

    // �ʴ������Źѡ�֡��
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
