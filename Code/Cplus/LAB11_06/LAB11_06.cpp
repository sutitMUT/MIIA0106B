#include <iostream>
#include <queue>

using namespace std;
// ��ҡ��ѧ��ѹ�ǡ�Ţ

int main() {
    queue<int> q;

    // Enqueue (������������� Queue)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // �ʴ���Ҵ�ҹ˹���ش
    cout << "Back element: " << q.back() << endl; // �ʴ���Ҵ�ҹ�����ش

    // Dequeue (�Ӥ�Ҵ�ҹ˹���ش�͡)
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    return 0;
}
