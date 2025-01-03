#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "โปรดเลือกเมนูที่ต้องการ:\n";
    cout << "1. โปรแกรมหาพื้นที่ของสี่เหลี่ยมผืนผ้า\n";
    cout << "2. โปรแกรมหาปริมาตรของสี่เหลี่ยมผืนผ้า\n";
    cout << "3. โปรแกรมคำนวณเงินเดือนของพนักงาน\n";
    cout << "เลือก: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "คุณเลือก: โปรแกรมหาพื้นที่ของสี่เหลี่ยมผืนผ้า\n";
        break;
    case 2:
        cout << "คุณเลือก: โปรแกรมหาปริมาตรของสี่เหลี่ยมผืนผ้า\n";
        break;
    case 3:
        cout << "คุณเลือก: โปรแกรมคำนวณเงินเดือนของพนักงาน\n";
        break;
    default:
        cout << "ตัวเลือกไม่ถูกต้อง\n";
        break;
    }
    return 0;
}
