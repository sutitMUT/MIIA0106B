#include <iostream>
#include <string>
using namespace std;

// คลาสแม่: Device
class Device {
protected:
	string name;  // ชื่อของอุปกรณ์
	bool isOn;    // สถานะเปิด/ปิด

public:
	// Constructor
	Device(string deviceName) : name(deviceName), isOn(false) {}

	// เปิดอุปกรณ์
	void turnOn() {
		isOn = true;
		cout << name << " is now ON." << endl;
	}

	// ปิดอุปกรณ์
	void turnOff() {
		isOn = false;
		cout << name << " is now OFF." << endl;
	}

	// แสดงสถานะของอุปกรณ์
	void status() {
		cout << name << " is currently " << (isOn ? "ON" : "OFF") << "." << endl;
	}
};

// คลาสลูก: Light
class Light : public Device {
private:
	int brightness;  // ระดับความสว่าง (0-100)

public:
	// Constructor
	Light(string deviceName) : Device(deviceName), brightness(0) {}

	// ตั้งค่าความสว่าง
	void setBrightness(int level) {
		if (!isOn) {
			cout << name << " is OFF. Turn it ON to adjust brightness." << endl;
			return;
		}
		if (level >= 0 && level <= 100) {
			brightness = level;
			cout << name << "'s brightness is set to " << brightness << "%." << endl;
		}
		else {
			cout << "Invalid brightness level! Please use a value between 0 and 100." << endl;
		}
	}
};

// คลาสลูก: Fan
class Fan : public Device {
private:
	int speed;  // ระดับความเร็ว (0-3)

public:
	// Constructor
	Fan(string deviceName) : Device(deviceName), speed(0) {}

	// ตั้งค่าความเร็ว
	void setSpeed(int level) {
		if (!isOn) {
			cout << name << " is OFF. Turn it ON to adjust speed." << endl;
			return;
		}
		if (level >= 0 && level <= 3) {
			speed = level;
			cout << name << "'s speed is set to level " << speed << "." << endl;
		}
		else {
			cout << "Invalid speed level! Please use a value between 0 and 3." << endl;
		}
	}
};

// ฟังก์ชันหลัก
int main() {
	// สร้างอุปกรณ์
	Light livingRoomLight("Living Room Light");
	Fan bedroomFan("Bedroom Fan");

	// ควบคุมหลอดไฟ
	cout << "\n[Light Control]\n";
	livingRoomLight.turnOn();
	livingRoomLight.setBrightness(75);
	livingRoomLight.status();
	livingRoomLight.turnOff();

	// ควบคุมพัดลม
	cout << "\n[Fan Control]\n";
	bedroomFan.turnOn();
	bedroomFan.setSpeed(2);
	bedroomFan.status();
	bedroomFan.turnOff();

	return 0;
}
