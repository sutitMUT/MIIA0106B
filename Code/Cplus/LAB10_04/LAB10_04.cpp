#include <iostream>
using namespace std;

// คลาสแม่: Calculator
class Calculator {
public:
    // ฟังก์ชันสำหรับการบวก
    int add(int a, int b) {
        return a + b;
    }
};

// คลาสลูก: SubtractionCalculator
class SubtractionCalculator : public Calculator {
public:
    // ฟังก์ชันสำหรับการลบ
    int subtract(int a, int b) {
        return a - b;
    }
};

// คลาสลูก: MultiplicationCalculator
class MultiplicationCalculator : public SubtractionCalculator {
public:
    // ฟังก์ชันสำหรับการคูณ
    int multiply(int a, int b) {
        return a * b;
    }
};

// ฟังก์ชันหลัก
int main() {
    // สร้างออบเจกต์จากคลาส MultiplicationCalculator
    MultiplicationCalculator mulCalc;

    // การบวก
    cout << "Addition (10 + 5): " << mulCalc.add(10, 5) << endl;

    // การลบ
    cout << "Subtraction (10 - 5): " << mulCalc.subtract(10, 5) << endl;

    // การคูณ
    cout << "Multiplication (10 * 5): " << mulCalc.multiply(10, 5) << endl;

    return 0;
}
