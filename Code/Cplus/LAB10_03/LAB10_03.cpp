#include <iostream>
#include <string>
using namespace std;

// �������: Device
class Device {
protected:
	string name;  // ���ͧ͢�ػ�ó�
	bool isOn;    // ʶҹ��Դ/�Դ

public:
	// Constructor
	Device(string deviceName) : name(deviceName), isOn(false) {}

	// �Դ�ػ�ó�
	void turnOn() {
		isOn = true;
		cout << name << " is now ON." << endl;
	}

	// �Դ�ػ�ó�
	void turnOff() {
		isOn = false;
		cout << name << " is now OFF." << endl;
	}

	// �ʴ�ʶҹТͧ�ػ�ó�
	void status() {
		cout << name << " is currently " << (isOn ? "ON" : "OFF") << "." << endl;
	}
};

// �����١: Light
class Light : public Device {
private:
	int brightness;  // �дѺ�������ҧ (0-100)

public:
	// Constructor
	Light(string deviceName) : Device(deviceName), brightness(0) {}

	// ��駤�Ҥ������ҧ
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

// �����١: Fan
class Fan : public Device {
private:
	int speed;  // �дѺ�������� (0-3)

public:
	// Constructor
	Fan(string deviceName) : Device(deviceName), speed(0) {}

	// ��駤�Ҥ�������
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

// �ѧ��ѹ��ѡ
int main() {
	// ���ҧ�ػ�ó�
	Light livingRoomLight("Living Room Light");
	Fan bedroomFan("Bedroom Fan");

	// �Ǻ�����ʹ�
	cout << "\n[Light Control]\n";
	livingRoomLight.turnOn();
	livingRoomLight.setBrightness(75);
	livingRoomLight.status();
	livingRoomLight.turnOff();

	// �Ǻ����Ѵ��
	cout << "\n[Fan Control]\n";
	bedroomFan.turnOn();
	bedroomFan.setSpeed(2);
	bedroomFan.status();
	bedroomFan.turnOff();

	return 0;
}
