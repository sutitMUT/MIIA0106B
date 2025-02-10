# สร้าง set ที่มีค่าซ้ำกัน
my_set = {3, 1, 4, 1, 5, 9}
my_set.add(2)  # เพิ่มค่า 2 เข้าไปใน set
my_set.remove(1)  # ลบค่าที่เป็น 1 ออกจาก set
print(my_set)

# แสดงขนาดของ list
print("Size of list:", len(my_set))

# แสดงสมาชิกทั้งหมดใน list ด้วย for loop
print("All elements in the list:")
for item in my_set:
    print(item)