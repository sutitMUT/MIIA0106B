#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Push (เพิ่มข้อมูล)
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // แสดงค่าด้านบนสุด

    // Pop (นำค่าด้านบนสุดออก)
    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    return 0;
}
