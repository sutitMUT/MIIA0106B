#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> myList = { 10, 20, 30 }; // ��˹�������������� list
    myList.push_front(5);  // ������ҷ����Ǣͧ list
    myList.push_back(40);  // ������ҷ����¢ͧ list
    myList.pop_front();    // ź��ҵ���á�͡

    for (int x : myList) {
        cout << x << " ";
    }
    return 0;
}
