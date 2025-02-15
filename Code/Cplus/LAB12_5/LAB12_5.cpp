#include <iostream>
#include <fstream>
#include <ctime>  // ใช้สำหรับสร้าง timestamp
#include <iomanip> // ใช้จัดรูปแบบตัวเลข
#include <string>   // ไลบรารีที่มีฟังก์ชัน getline()
using namespace std;

// ฟังก์ชันสร้าง timestamp ปัจจุบัน
string getCurrentTime() {
    time_t now = time(0);
    struct tm timeStruct;
    localtime_s(&timeStruct, &now);  // ใช้ localtime_s() แทน localtime()

    char buffer[30];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeStruct);
    return string(buffer);
}

int main() {
    string filePath = "sensor_data.txt";

    // 1️ บันทึกค่าจากเซนเซอร์ลงไฟล์
    ofstream outFile(filePath, ios::app);  // เปิดไฟล์แบบ append (เพิ่มข้อมูล)
    if (outFile.is_open()) {
        double temperature = 25.3; // จำลองค่าเซนเซอร์
        double pressure = 101.3;

        outFile << "Timestamp: " << getCurrentTime()
            << ", Temperature: " << fixed << setprecision(1) << temperature << "°C"
            << ", Pressure: " << pressure << " kPa" << endl;
        outFile.close();
        cout << "[บันทึกข้อมูลเซนเซอร์ลงไฟล์สำเร็จ!]\n";
    }
    else {
        cout << "Error: Cannot open file!" << endl;
    }

    // 2️ อ่านค่าเซนเซอร์จากไฟล์
    ifstream inFile(filePath);
    if (inFile.is_open()) {
        string line;
        cout << "\n[แสดงข้อมูลจากไฟล์ sensor_data.txt]\n";
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
