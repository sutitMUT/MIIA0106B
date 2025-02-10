#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;

    // Push (����������)
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // �ʴ���Ҵ�ҹ���ش

    // Pop (�Ӥ�Ҵ�ҹ���ش�͡)
    s.pop();
    cout << "Top after pop: " << s.top() << endl;

    return 0;
}
