def main():
    # สร้าง list สำหรับเก็บจำนวนทศนิยม 20 ตัว
    numbers = []

    # รับจำนวนจากผู้ใช้
    print("Enter 20 decimal numbers:")
    for i in range(1, 21):
        number = float(input(f"Number {i}: "))
        numbers.append(number)

    # คำนวณรวมของผลลบ (ตัวที่ 1 - ตัวที่ 2 - ... - ตัวที่ 20)
    subtraction_result = numbers[0]  # เริ่มจากตัวแรก
    for i in range(1, len(numbers)):
        subtraction_result -= numbers[i]

    # คำนวณผลรวมของคูณ (ตัวที่ 1 * ตัวที่ 2 * ... * ตัวที่ 20)
    multiplication_result = 1
    for number in numbers:
        multiplication_result *= number

    # แสดงผลจำนวนที่ผู้ใช้ป้อน
    print("\nNumbers entered:")
    for i, number in enumerate(numbers, start=1):
        print(f"Number {i}: {number}")

    # แสดงผลลัพธ์การลบและผลลัพธ์การคูณ
    print(f"\nResult of subtraction: {subtraction_result}")
    print(f"Result of multiplication: {multiplication_result}")

if __name__ == "__main__":
    main()
