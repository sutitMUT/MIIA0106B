#include <iostream>
using namespace std;

// ฟังก์ชันสำหรับการสลับค่าภายในอาร์เรย์
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// ฟังก์ชันสำหรับการเรียงลำดับโดยใช้ Bubble Sort
void bubbleSort(int* arr, int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - i - 1; ++j) {
			// ใช้ pointer เพื่อเปรียบเทียบและสลับค่า
			if (*(arr + j) > *(arr + j + 1)) {
				swap((arr + j), (arr + j + 1));
			}
		}
	}
}

int main() {
	// กำหนดอาร์เรย์ตัวอย่าง
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "อาร์เรย์ก่อนการเรียงลำดับ: \n";
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	// เรียกใช้ฟังก์ชันเรียงลำดับ
	bubbleSort(arr, size);

	cout << "\nอาร์เรย์หลังการเรียงลำดับ: \n";
	for (int i = 0; i < size; ++i) {
		cout << *(arr + i) << " ";
	}
	cout << endl;

	return 0;
}
