class Calculator:
    # ฟังก์ชันสำหรับการบวก
    def add(self, a, b):
        return a + b

class SubtractionCalculator(Calculator):
    # ฟังก์ชันสำหรับการลบ
    def subtract(self, a, b):
        return a - b

class MultiplicationCalculator(SubtractionCalculator):
    # ฟังก์ชันสำหรับการคูณ
    def multiply(self, a, b):
        return a * b

# ฟังก์ชันหลัก
if __name__ == "__main__":
    # สร้างออบเจกต์จากคลาส MultiplicationCalculator
    mul_calc = MultiplicationCalculator()

    # การบวก
    print(f"Addition (10 + 5): {mul_calc.add(10, 5)}")

    # การลบ
    print(f"Subtraction (10 - 5): {mul_calc.subtract(10, 5)}")

    # การคูณ
    print(f"Multiplication (10 * 5): {mul_calc.multiply(10, 5)}")


