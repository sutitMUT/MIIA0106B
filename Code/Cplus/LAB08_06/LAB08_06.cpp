//#include <iostream>
//
//// สร้างชื่อใหม่ให้กับ unsigned int
//typedef unsigned int uint;
//
//int main() {
//	uint age = 25;  // uint แทน unsigned int
//	std::cout << "Age: " << age << std::endl;
//	return 0;
//}
//
//
//#include <iostream>
//
//// สร้างชื่อใหม่ให้ pointer
//typedef int* IntPointer;
//
//int main() {
//	int a = 10;
//	IntPointer ptr = &a;  // ptr แทน int*
//	std::cout << "Value: " << *ptr << std::endl;
//	return 0;
//}
//
//#include <iostream>
//
//// สร้าง struct และ typedef ให้มัน
//typedef struct {
//	int x;
//	int y;
//} Point;
//
//int main() {
//	Point p1 = { 10, 20 };
//	std::cout << "Point: (" << p1.x << ", " << p1.y << ")" << std::endl;
//	return 0;
//}


#include <iostream>

enum class Color {
	RED,
	GREEN,
	BLUE
};

int main() {
	Color favorite = Color::GREEN;

	if (favorite == Color::GREEN) {
		std::cout << "Your favorite color is green!" << std::endl;
	}
	return 0;
}
