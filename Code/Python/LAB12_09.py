# ฟังก์ชันบันทึกข้อมูลเริ่มต้นลงไฟล์
def initialize_file():
    with open("data.txt", "w") as file:
        file.write("Apple\nBanana\nCherry\n")

# ฟังก์ชันแสดงข้อมูลจากไฟล์
def display_file():
    print("\n[ข้อมูลปัจจุบันในไฟล์ data.txt]")
    with open("data.txt", "r") as file:
        print(file.read().strip())

# ฟังก์ชันแก้ไขข้อมูลในไฟล์
def replace_word(old_word, new_word):
    with open("data.txt", "r") as file:
        lines = file.readlines()

    with open("data.txt", "w") as file:
        for line in lines:
            file.write(line.replace(old_word, new_word))

    print("[แก้ไขข้อมูลในไฟล์เรียบร้อย!]")

# เรียกใช้งานฟังก์ชัน
initialize_file()  # บันทึกข้อมูลเบื้องต้น
display_file()     # แสดงข้อมูลก่อนแก้ไข

old_word = input("\nEnter word to replace: ")
new_word = input("Enter new word: ")

replace_word(old_word, new_word)
display_file()  # แสดงข้อมูลหลังแก้ไข
