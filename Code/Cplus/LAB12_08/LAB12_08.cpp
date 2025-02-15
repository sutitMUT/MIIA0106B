#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.csv");
    if (!file.is_open()) {
        cout << "Error: Cannot open file!" << endl;
        return 1;
    }

    string line;
    cout << "[แสดงข้อมูลจากไฟล์ data.csv]\n";
    while (getline(file, line)) {
        stringstream ss(line);
        string id, name, salary;
        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, salary, ',');

        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }

    file.close();
    return 0;
}
