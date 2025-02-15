#include <iostream>
#include <fstream>  // ������Ѻ��ҹ���
#include <string>   // �ź���շ���տѧ��ѹ getline()
using namespace std;

int main() {

    ofstream outFile("example.txt"); // �Դ���������¹ (����������� �к������ҧ���)

    if (outFile.is_open()) {  // ��Ǩ�ͺ����Դ���������������
        outFile << "Hello, C++ File Handling!" << endl; // ��¹������ŧ���
        outFile << "Hello 1, C++ File Handling!" << endl; // ��¹������ŧ���
        outFile << "Hello 2, C++ File Handling!" << endl; // ��¹������ŧ���
        outFile.close();  // �Դ����������¹����
        cout << "Data saved successfully!" << endl;
    }
    else {
        cout << "Error opening file!" << endl;
    }

    ifstream inFile("example.txt");  // �Դ���������ҹ
    string text;

    if (inFile.is_open()) {
        while (getline(inFile, text)) {  // ��ҹ���к�÷Ѵ
            cout << text << endl;
        }
        inFile.close();  // �Դ���
    }
    else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
