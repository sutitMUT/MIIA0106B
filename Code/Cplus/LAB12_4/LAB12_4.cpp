#include <iostream>
#include <fstream>
#include <direct.h>  // ������Ѻ���ҧ������� Windows
using namespace std;

int main() {
    string folder = "C:\\MyFolder";
    string filePath = folder + "\\example.txt";

    // ���ҧ������ (�ҡ�ѧ�����)
    if (_mkdir(folder.c_str()) == 0) {
        cout << "Folder created: " << folder << endl;
    }
    else {
        cout << "Folder already exists or error occurred." << endl;
    }

    // �Դ���������������ҧ
    ofstream outFile(filePath);
    if (outFile.is_open()) {
        outFile << "Hello, file in custom folder!" << endl;
        outFile.close();
        cout << "File saved at: " << filePath << endl;
    }
    else {
        cout << "Error: Unable to open file!" << endl;
    }

    return 0;
}
