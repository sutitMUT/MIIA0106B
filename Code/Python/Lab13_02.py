import time

# ฟังก์ชันสำหรับเมนูที่ 1: รอ 3 นาที (แสดงข้อความทุก 10 วินาที)
def countdown_timer():
    total_time = 180  # ตั้งเวลา 3 นาที (180 วินาที)
    interval = 10     # แสดงข้อความทุก 10 วินาที
    while total_time > 0:
        print(f"⏳ Time remaining: {total_time} seconds...")
        time.sleep(interval)  # รอเป็นช่วง ๆ
        total_time -= interval
    print("✅ 3 minutes countdown completed!")

# ฟังก์ชันสำหรับเมนูที่ 2: แสดงแม่สูตรคูณ
def multiplication_table():
    number = int(input("📌 Enter the multiplication table number: "))  # รับเลขแม่สูตรคูณจากผู้ใช้
    print(f"📢 Multiplication Table for {number}")
    for i in range(1, 13):
        print(f"{number} x {i} = {number * i}")  # แสดงผลแม่สูตรคูณ
        time.sleep(0.5)  # เพิ่มความสมจริงให้การแสดงผล

# ฟังก์ชันสำหรับเมนูหลัก (ไม่มี Thread)
def main_menu():
    while True:
        print("\n🔹 Please select a menu:")
        print("1. Start a 3-minute countdown (updates every 10 seconds)")
        print("2. Show multiplication table")
        print("3. Exit program")
        choice = input("Select menu (1, 2, or 3): ")

        if choice == "1":
            countdown_timer()  # นับถอยหลังจนกว่าจะเสร็จ แล้วจึงกลับมาที่เมนูหลัก

        elif choice == "2":
            multiplication_table()  # แสดงแม่สูตรคูณ

        elif choice == "3":
            print("👋 Thank you for using the program! Exiting...")
            break  # ออกจากลูป

        else:
            print("❌ Invalid selection. Please try again.")

# เรียกใช้งานเมนูหลัก
if __name__ == "__main__":
    main_menu()
