#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> myMap;
    myMap["Alice"] = 25; // ��˹���Ңͧ Alice �� 25
    myMap["Bob"] = 30;   // ��˹���Ңͧ Bob �� 30

    cout << "Alice's age: " << myMap["Alice"] << endl;
    return 0;
}
