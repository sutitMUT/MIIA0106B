# กำหนดค่าเริ่มต้นให้ list
my_list = [1, 2, 3, 4, 5]
my_list.append(6)  # เพิ่มค่า 6 ไปที่ท้ายของ list
my_list.pop()      # ลบค่าตัวสุดท้ายออก
print("Size of list:", len(my_list))
print("First element:", my_list[0])
print("Last element:", my_list[-1])

# แสดงขนาดของ list
print("Size of list:", len(my_list))

# แสดงสมาชิกทั้งหมดใน list ด้วย for loop
print("All elements in the list:")
for item in my_list:
    print(item)