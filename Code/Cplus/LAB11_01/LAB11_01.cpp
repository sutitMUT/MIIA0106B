#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5 }; // ��˹��������������Ѻ vector
    v.push_back(6);  // ������� 6 价����¢ͧ vector
    v.pop_back();    // ź��ҵ���ش�����͡

    cout << "Size of vector: " << v.size() << endl; // �ʴ���Ҵ�ͧ vector
    cout << "First element: " << v.front() << endl; // �ʴ���ҵ���á
    cout << "Last element: " << v.back() << endl; // �ʴ���ҵ���ش����

    return 0;
}
