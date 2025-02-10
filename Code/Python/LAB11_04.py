from collections import deque
dq = deque([10, 20, 30])
dq.appendleft(5)  # เพิ่มค่าที่หัว
dq.append(40)     # เพิ่มค่าที่ท้าย
dq.popleft()      # ลบค่าตัวแรก
print(dq)
