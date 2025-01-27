#include <iostream>
using namespace std;

class Example {
private:
    int privateData;  // สมาชิกแบบ private

protected:
    int protectedData;  // สมาชิกแบบ protected

public:
    int publicData;  // สมาชิกแบบ public

    // Constructor
    Example(int privateValue, int protectedValue, int publicValue) {
        privateData = privateValue;
        protectedData = protectedValue;
        publicData = publicValue;
    }

    // Method สำหรับจัดการ privateData
    void setPrivateData(int value) {
        privateData = value;
    }

    int getPrivateData() {
        return privateData;
    }

    // Method สำหรับจัดการ protectedData
    void setProtectedData(int value) {
        protectedData = value;
    }

    int getProtectedData() {
        return protectedData;
    }

    // Method สำหรับแสดงข้อมูลทั้งหมด
    void display() {
        cout << "Private Data: " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    // สร้างวัตถุจากคลาส Example
    Example example(10, 20, 30);

    // แก้ไขและเข้าถึง privateData ผ่าน Method
    example.setPrivateData(50);
    cout << "Private Data (by Method): " << example.getPrivateData() << endl;

    // แก้ไขและเข้าถึง protectedData ผ่าน Method
    example.setProtectedData(100);
    cout << "Protected Data (by Method): " << example.getProtectedData() << endl;

    // เข้าถึง publicData โดยตรง
    example.publicData = 300;
    cout << "Public Data (direct): " << example.publicData << endl;

    // แสดงข้อมูลทั้งหมด
    example.display();

    return 0;
}
