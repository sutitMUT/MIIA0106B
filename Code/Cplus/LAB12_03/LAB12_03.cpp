#include <iostream>
#include <fstream>
#include <string>   // �ź���շ���տѧ��ѹ getline()
using namespace std;

int main() {
	fstream file("example.txt", ios::in | ios::out | ios::app);  // �Դ���Ẻ��ҹ�����¹

	if (file.is_open()) {

		file << "1 Appending new data...\n";  // ��������������ŧ价��������
		file.seekg(0);  // ����͹���˹�仨ش������鹢ͧ���
		file << "2 Appending new data...\n";  // ��������������ŧ价��������
		file.seekg(0);  // ����͹���˹�仨ش������鹢ͧ���

		string text;
		while (getline(file, text)) {  // ��ҹ���
			cout << text << endl;
		}

		file.close();
	}
	else {
		cout << "Error opening file!" << endl;
	}

	return 0;
}
