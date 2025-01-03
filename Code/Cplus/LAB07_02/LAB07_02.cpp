#include <iostream>
using namespace std;

// ฟังก์ชันสำหรับหาค่ามากที่สุดในอาร์เรย์
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// ฟังก์ชันสำหรับหาค่าน้อยที่สุดในอาร์เรย์
int findMin(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int size;

    // รับขนาดของอาร์เรย์จากผู้ใช้
    cout << "Enter the size of the array: ";
    cin >> size;

    // สร้างอาร์เรย์แบบไดนามิก
    int* arr = new int[size];

    // รับค่าของอาร์เรย์
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // เรียกฟังก์ชันเพื่อหาค่ามากที่สุดและน้อยที่สุด
    int maxVal = findMax(arr, size);
    int minVal = findMin(arr, size);

    // แสดงผลลัพธ์
    cout << "\nMaximum value in the array: " << maxVal << endl;
    cout << "Minimum value in the array: " << minVal << endl;

    // คืนหน่วยความจำที่จัดสรร
    delete[] arr;

    return 0;
}
