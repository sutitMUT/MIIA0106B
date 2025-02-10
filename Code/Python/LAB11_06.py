from collections import deque

# ใช้ deque เป็น Stack (LIFO)
stack = deque()

# Push (เพิ่มข้อมูล)
stack.append(10)
stack.append(20)
stack.append(30)

print("Top element:", stack[-1])  # แสดงค่าด้านบนสุด

# Pop (นำค่าด้านบนสุดออก)
stack.pop()
print("Top after pop:", stack[-1])
