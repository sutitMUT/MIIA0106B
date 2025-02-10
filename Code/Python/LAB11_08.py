from queue import Queue

# ใช้ Queue() เป็น Queue (FIFO)
queue = Queue()

# Enqueue (เพิ่มข้อมูลเข้า Queue)
queue.put(10)
queue.put(20)
queue.put(30)

print("Front element:", queue.queue[0])  # แสดงค่าด้านหน้าสุด

# Dequeue (นำค่าด้านหน้าสุดออก)
queue.get()
print("Front after pop:", queue.queue[0])
