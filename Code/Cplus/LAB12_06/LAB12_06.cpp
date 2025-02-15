#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string message;
    cout << "Enter your message: ";
    getline(cin, message);

    // เขียนข้อความลงไฟล์
    ofstream outFile("message.txt");
    if (outFile.is_open()) {
        outFile << message << endl;
        outFile.close();
        cout << "[บันทึกข้อมูลเรียบร้อย!]\n";
    }
    else {
        cout << "Error: Cannot open file!" << endl;
    }

    // อ่านข้อความจากไฟล์
    ifstream inFile("message.txt");
    if (inFile.is_open()) {
        string line;
        cout << "\n[อ่านข้อมูลจากไฟล์ message.txt]\n";
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
