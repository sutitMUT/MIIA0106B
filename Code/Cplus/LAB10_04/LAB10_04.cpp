#include <iostream>
using namespace std;

// �������: Calculator
class Calculator {
public:
    // �ѧ��ѹ����Ѻ��úǡ
    int add(int a, int b) {
        return a + b;
    }
};

// �����١: SubtractionCalculator
class SubtractionCalculator : public Calculator {
public:
    // �ѧ��ѹ����Ѻ���ź
    int subtract(int a, int b) {
        return a - b;
    }
};

// �����١: MultiplicationCalculator
class MultiplicationCalculator : public SubtractionCalculator {
public:
    // �ѧ��ѹ����Ѻ��äٳ
    int multiply(int a, int b) {
        return a * b;
    }
};

// �ѧ��ѹ��ѡ
int main() {
    // ���ҧ�ͺਡ��ҡ���� MultiplicationCalculator
    MultiplicationCalculator mulCalc;

    // ��úǡ
    cout << "Addition (10 + 5): " << mulCalc.add(10, 5) << endl;

    // ���ź
    cout << "Subtraction (10 - 5): " << mulCalc.subtract(10, 5) << endl;

    // ��äٳ
    cout << "Multiplication (10 * 5): " << mulCalc.multiply(10, 5) << endl;

    return 0;
}
