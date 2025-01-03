# ฟังก์ชันสำหรับสลับค่าของตัวแปรสองตัว
def swap_values(a, b):
    return b, a

def main():
    # รับค่าจากผู้ใช้
    x = int(input("Enter value for x: "))
    y = int(input("Enter value for y: "))

    # แสดงค่าก่อนการสลับ
    print("\nBefore swapping:")
    print(f"x = {x}, y = {y}")

    # เรียกฟังก์ชันเพื่อสลับค่า
    x, y = swap_values(x, y)

    # แสดงค่าหลังการสลับ
    print("\nAfter swapping:")
    print(f"x = {x}, y = {y}")

if __name__ == "__main__":
    main()
