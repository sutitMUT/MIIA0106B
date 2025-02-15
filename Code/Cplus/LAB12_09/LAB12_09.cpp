#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// ฟังก์ชันบันทึกข้อมูลเริ่มต้นลงไฟล์
void initializeFile() {
    ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Apple\nBanana\nCherry\n";
        outFile.close();
    }
    else {
        cout << "Error: Cannot create file!" << endl;
    }
}

// ฟังก์ชันแสดงข้อมูลจากไฟล์
void displayFile() {
    ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        cout << "Error: Cannot open file!" << endl;
        return;
    }

    cout << "\n[ข้อมูลปัจจุบันในไฟล์ data.txt]\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

// ฟังก์ชันแก้ไขข้อมูลในไฟล์
void replaceWord(const string& oldWord, const string& newWord) {
    ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        cout << "Error: Cannot open file!" << endl;
        return;
    }

    vector<string> lines;
    string line;
    while (getline(inFile, line)) {
        if (line == oldWord) {
            lines.push_back(newWord);
        }
        else {
            lines.push_back(line);
        }
    }
    inFile.close();

    ofstream outFile("data.txt");
    for (const string& updatedLine : lines) {
        outFile << updatedLine << endl;
    }
    outFile.close();
    cout << "[แก้ไขข้อมูลในไฟล์เรียบร้อย!]\n";
}

int main() {
    initializeFile();  // บันทึกข้อมูลเบื้องต้น
    displayFile();     // แสดงข้อมูลก่อนแก้ไข

    string oldWord, newWord;
    cout << "\nEnter word to replace: ";
    cin >> oldWord;
    cout << "Enter new word: ";
    cin >> newWord;

    replaceWord(oldWord, newWord);
    displayFile();  // แสดงข้อมูลหลังแก้ไข

    return 0;
}
