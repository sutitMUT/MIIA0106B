#include <iostream>
#include <string>
using namespace std;

// ��������Ѻö¹��
class Car {
private:
    string brand;      // ������ö
    string model;      // ���ö
    string color;      // �բͧö
    int year;          // �շ���Ե
    float mileage;     // ���зҧ������ (��������)

public:
    // �ѧ��ѹ Setter ����Ѻ��駤�Ң�����
    void setBrand(const string& b) { brand = b; }
    void setModel(const string& m) { model = m; }
    void setColor(const string& c) { color = c; }
    void setYear(int y) { year = y; }
    void setMileage(float mi) { mileage = mi; }

    // �ѧ��ѹ Getter ����Ѻ�֧������
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    int getYear() const { return year; }
    float getMileage() const { return mileage; }

    // �ѧ��ѹ����Ѻ�ʴ�������ö
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

    // ��˹���� Car 1
    car1.setBrand("Toyota");
    car1.setModel("Corolla");
    car1.setColor("White");
    car1.setYear(2020);
    car1.setMileage(25000.0);

    // ��˹���� Car 2
    car2.setBrand("Honda");
    car2.setModel("Civic");
    car2.setColor("Black");
    car2.setYear(2022);
    car2.setMileage(15000.0);

    // ��˹���� Car 3
    car3.setBrand("Ford");
    car3.setModel("F-150");
    car3.setColor("Silver");
    car3.setYear(2023);
    car3.setMileage(500.0);

    // �ʴ�������ö������
    cout << "=== Car 1 ===" << endl;
    car1.displayInfo();

    cout << "=== Car 2 ===" << endl;
    car2.displayInfo();

    cout << "=== Car 3 ===" << endl;
    car3.displayInfo();

    return 0;
}
