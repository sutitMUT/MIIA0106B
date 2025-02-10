#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap;
    myMap["Alice"] = 25; // กำหนดค่าของ Alice เป็น 25
    myMap["Bob"] = 30;   // กำหนดค่าของ Bob เป็น 30

    cout << "Alice's age: " << myMap["Alice"] << endl;
    return 0;
}
