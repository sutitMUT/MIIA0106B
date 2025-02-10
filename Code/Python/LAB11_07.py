from collections import deque

# ใช้ deque เป็น Queue (FIFO)
queue = deque()

# Enqueue (เพิ่มข้อมูลเข้า Queue)
queue.append(10)
queue.append(20)
queue.append(30)

print("Front element:", queue[0])  # แสดงค่าด้านหน้าสุด

# Dequeue (นำค่าด้านหน้าสุดออก)
queue.popleft()
print("Front after pop:", queue[0])
