#include <iostream>
using namespace std;

int main() {
    // สร้าง Array สำหรับเก็บจำนวนทศนิยม 20 ตัว
    double numbers[20];
    double subtractionResult = 0;
    double multiplicationResult = 1;

    // รับจำนวนจากผู้ใช้
    cout << "Enter 20 decimal numbers:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // คำนวณรวมของผลลบ (ตัวที่ 1 - ตัวที่ 2 - ... - ตัวที่ 20)
    subtractionResult = numbers[0]; // เริ่มจากตัวแรก
    for (int i = 1; i < 20; i++) {
        subtractionResult -= numbers[i];
    }

    // คำนวณผลรวมของคูณ (ตัวที่ 1 * ตัวที่ 2 * ... * ตัวที่ 20)
    for (int i = 0; i < 20; i++) {
        multiplicationResult *= numbers[i];
    }

    // แสดงผลจำนวนที่ผู้ใช้ป้อน
    cout << "\nNumbers entered:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Number " << i + 1 << ": " << numbers[i] << endl;
    }

    // แสดงผลการลบและผลการคูณ
    cout << "\nResult of subtraction: " << subtractionResult << endl;
    cout << "Result of multiplication: " << multiplicationResult << endl;

    return 0;
}
