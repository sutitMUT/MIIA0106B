#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = { 3, 1,4, 4, 1, 5, 9 }; // ข้อมูลที่ไม่ซ้ำกัน
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;
    mySet.insert(3);
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;
    mySet.insert(2);
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;
    mySet.erase(1); // ลบค่าที่เป็น 1 ออกจาก set

    for (int x : mySet) {
        cout << x << " ";
    }
    return 0;
}
