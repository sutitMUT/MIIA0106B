#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = { 10, 20, 30 }; // กำหนดค่าเริ่มต้นให้ list
    myList.push_front(5);  // เพิ่มค่าที่หัวของ list
    myList.push_back(40);  // เพิ่มค่าที่ท้ายของ list
    myList.pop_front();    // ลบค่าตัวแรกออก

    for (int x : myList) {
        cout << x << " ";
    }
    return 0;
}
