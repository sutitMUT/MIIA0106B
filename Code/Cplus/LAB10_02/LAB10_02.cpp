#include <iostream>
using namespace std;

class Example {
private:
    int privateData;  // ��ҪԡẺ private

protected:
    int protectedData;  // ��ҪԡẺ protected

public:
    int publicData;  // ��ҪԡẺ public

    // Constructor
    Example(int privateValue, int protectedValue, int publicValue) {
        privateData = privateValue;
        protectedData = protectedValue;
        publicData = publicValue;
    }

    // Method ����Ѻ�Ѵ��� privateData
    void setPrivateData(int value) {
        privateData = value;
    }

    int getPrivateData() {
        return privateData;
    }

    // Method ����Ѻ�Ѵ��� protectedData
    void setProtectedData(int value) {
        protectedData = value;
    }

    int getProtectedData() {
        return protectedData;
    }

    // Method ����Ѻ�ʴ������ŷ�����
    void display() {
        cout << "Private Data: " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    // ���ҧ�ѵ�بҡ���� Example
    Example example(10, 20, 30);

    // ��������Ҷ֧ privateData ��ҹ Method
    example.setPrivateData(50);
    cout << "Private Data (by Method): " << example.getPrivateData() << endl;

    // ��������Ҷ֧ protectedData ��ҹ Method
    example.setProtectedData(100);
    cout << "Protected Data (by Method): " << example.getProtectedData() << endl;

    // ��Ҷ֧ publicData �µç
    example.publicData = 300;
    cout << "Public Data (direct): " << example.publicData << endl;

    // �ʴ������ŷ�����
    example.display();

    return 0;
}
