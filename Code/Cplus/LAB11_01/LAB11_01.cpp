#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5 }; // กำหนดค่าเริ่มต้นให้กับ vector
    v.push_back(6);  // เพิ่มค่า 6 ไปที่ท้ายของ vector
    v.pop_back();    // ลบค่าตัวสุดท้ายออก

    cout << "Size of vector: " << v.size() << endl; // แสดงขนาดของ vector
    cout << "First element: " << v.front() << endl; // แสดงค่าตัวแรก
    cout << "Last element: " << v.back() << endl; // แสดงค่าตัวสุดท้าย

    return 0;
}
