#include <iostream>
#include <string>
using namespace std;

// ��������Ѻ�ѡ�֡��
class Student {
private:
    string studentID; // ���ʹѡ�֡��
    string nickname;  // �������

public:
    // �ѧ��ѹ Setter ����Ѻ��駤�Ң�����
    void setStudentID(const string& id) { studentID = id; }
    void setNickname(const string& name) { nickname = name; }

    // �ѧ��ѹ Getter ����Ѻ�֧������
    string getStudentID() const { return studentID; }
    string getNickname() const { return nickname; }

    // �ѧ��ѹ����Ѻ�ʴ������Źѡ�֡��
    void displayInfo() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Nickname: " << nickname << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Student student1, student2;

    // ��˹������Źѡ�֡�� 1
    student1.setStudentID("64001");
    student1.setNickname("Tom");

    // ��˹������Źѡ�֡�� 2
    student2.setStudentID("64002");
    student2.setNickname("Jerry");

    // �ʴ������Źѡ�֡��
    cout << "=== Student 1 ===" << endl;
    student1.displayInfo();

    cout << "=== Student 2 ===" << endl;
    student2.displayInfo();

    return 0;
}


