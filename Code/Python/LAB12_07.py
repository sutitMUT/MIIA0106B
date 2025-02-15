# รับค่าตัวเลขจากผู้ใช้
a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

# คำนวณผลลัพธ์
calculations = [
    f"{a} + {b} = {a + b}",
    f"{a} - {b} = {a - b}",
    f"{a} * {b} = {a * b}",
    f"{a} / {b} = {a / b if b != 0 else 'undefined'}"
]

# บันทึกผลลัพธ์ลงไฟล์
with open("calculation.txt", "w") as file:
    file.write("\n".join(calculations))
print("[บันทึกผลลัพธ์เรียบร้อย!]")

# อ่านข้อมูลจากไฟล์
print("\n[อ่านข้อมูลจากไฟล์ calculation.txt]")
with open("calculation.txt", "r") as file:
    print(file.read())
