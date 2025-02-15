#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    double a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    ofstream outFile("calculation.txt");
    if (outFile.is_open()) {
        outFile << a << " + " << b << " = " << (a + b) << endl;
        outFile << a << " - " << b << " = " << (a - b) << endl;
        outFile << a << " * " << b << " = " << (a * b) << endl;
        outFile << a << " / " << b << " = " << (b != 0 ? a / b : 0) << endl;
        outFile.close();
        cout << "[�ѹ�֡���Ѿ�����º����!]\n";
    }

    ifstream inFile("calculation.txt");
    if (inFile.is_open()) {
        string line;
        cout << "\n[��ҹ�����Ũҡ��� calculation.txt]\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }

    return 0;
}
