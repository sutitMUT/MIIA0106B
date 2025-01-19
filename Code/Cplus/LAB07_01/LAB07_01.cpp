#include <iostream>
using namespace std;
// สอบย่อย ข้อ1 1.5 คะแนน
// ฟังก์ชันสำหรับสลับค่าของตัวแปรสองตัวโดยใช้พอยน์เตอร์
void swapValues(int* a, int* b) {
    int temp = *a;  // เก็บค่าของตัวแปร a ไว้ในตัวแปรชั่วคราว
    *a = *b;        // เปลี่ยนค่าของ a ให้เท่ากับค่าของ b
    *b = temp;      // เปลี่ยนค่าของ b ให้เท่ากับค่าชั่วคราว
}

int main() {
    int x, y;

    // รับค่าจากผู้ใช้
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    // แสดงค่าก่อนการสลับ
    cout << "\nBefore swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    // เรียกฟังก์ชันเพื่อสลับค่า
    swapValues(&x, &y);

    // แสดงค่าหลังการสลับ
    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
