# รับข้อความจากผู้ใช้
message = input("Enter your message: ")

# เขียนข้อความลงไฟล์
with open("message.txt", "w") as file:
    file.write(message + "\n")
print("[บันทึกข้อมูลเรียบร้อย!]")

# อ่านข้อความจากไฟล์
print("\n[อ่านข้อมูลจากไฟล์ message.txt]")
with open("message.txt", "r") as file:
    print(file.read())
