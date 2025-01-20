#include <iostream>
#include <string>
using namespace std;

// คลาสสำหรับรถยนต์
class Car {
private:
    string brand;      // ยี่ห้อรถ
    string model;      // รุ่นรถ
    string color;      // สีของรถ
    int year;          // ปีที่ผลิต
    float mileage;     // ระยะทางที่ใช้ไป (กิโลเมตร)

public:
    // ฟังก์ชัน Setter สำหรับตั้งค่าข้อมูล
    void setBrand(const string& b) { brand = b; }
    void setModel(const string& m) { model = m; }
    void setColor(const string& c) { color = c; }
    void setYear(int y) { year = y; }
    void setMileage(float mi) { mileage = mi; }

    // ฟังก์ชัน Getter สำหรับดึงข้อมูล
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    int getYear() const { return year; }
    float getMileage() const { return mileage; }

    // ฟังก์ชันสำหรับแสดงข้อมูลรถ
    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " km" << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Car car1, car2, car3;

    // กำหนดค่า Car 1
    car1.setBrand("Toyota");
    car1.setModel("Corolla");
    car1.setColor("White");
    car1.setYear(2020);
    car1.setMileage(25000.0);

    // กำหนดค่า Car 2
    car2.setBrand("Honda");
    car2.setModel("Civic");
    car2.setColor("Black");
    car2.setYear(2022);
    car2.setMileage(15000.0);

    // กำหนดค่า Car 3
    car3.setBrand("Ford");
    car3.setModel("F-150");
    car3.setColor("Silver");
    car3.setYear(2023);
    car3.setMileage(500.0);

    // แสดงข้อมูลรถทั้งหมด
    cout << "=== Car 1 ===" << endl;
    car1.displayInfo();

    cout << "=== Car 2 ===" << endl;
    car2.displayInfo();

    cout << "=== Car 3 ===" << endl;
    car3.displayInfo();

    return 0;
}
