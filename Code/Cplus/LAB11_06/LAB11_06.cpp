#include <iostream>
#include <queue>

using namespace std;
// อยากได้ฟังก์ชันบวกเลข

int main() {
    queue<int> q;

    // Enqueue (เพิ่มข้อมูลเข้า Queue)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // แสดงค่าด้านหน้าสุด
    cout << "Back element: " << q.back() << endl; // แสดงค่าด้านท้ายสุด

    // Dequeue (นำค่าด้านหน้าสุดออก)
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    return 0;
}
