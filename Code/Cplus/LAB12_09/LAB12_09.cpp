#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// �ѧ��ѹ�ѹ�֡�������������ŧ���
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

// �ѧ��ѹ�ʴ������Ũҡ���
void displayFile() {
    ifstream inFile("data.txt");
    if (!inFile.is_open()) {
        cout << "Error: Cannot open file!" << endl;
        return;
    }

    cout << "\n[�����ŻѨ�غѹ���� data.txt]\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

// �ѧ��ѹ��䢢���������
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
    cout << "[��䢢������������º����!]\n";
}

int main() {
    initializeFile();  // �ѹ�֡���������ͧ��
    displayFile();     // �ʴ������š�͹���

    string oldWord, newWord;
    cout << "\nEnter word to replace: ";
    cin >> oldWord;
    cout << "Enter new word: ";
    cin >> newWord;

    replaceWord(oldWord, newWord);
    displayFile();  // �ʴ���������ѧ���

    return 0;
}
