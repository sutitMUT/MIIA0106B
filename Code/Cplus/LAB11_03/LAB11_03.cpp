#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> mySet = { 3, 1,4, 4, 1, 5, 9 }; // �����ŷ������ӡѹ
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
    mySet.erase(1); // ź��ҷ���� 1 �͡�ҡ set

    for (int x : mySet) {
        cout << x << " ";
    }
    return 0;
}
