#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string message;
    cout << "Enter your message: ";
    getline(cin, message);

    // ��¹��ͤ���ŧ���
    ofstream outFile("message.txt");
    if (outFile.is_open()) {
        outFile << message << endl;
        outFile.close();
        cout << "[�ѹ�֡���������º����!]\n";
    }
    else {
        cout << "Error: Cannot open file!" << endl;
    }

    // ��ҹ��ͤ����ҡ���
    ifstream inFile("message.txt");
    if (inFile.is_open()) {
        string line;
        cout << "\n[��ҹ�����Ũҡ��� message.txt]\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cout << "Error: Cannot open file for reading!" << endl;
    }

    return 0;
}
