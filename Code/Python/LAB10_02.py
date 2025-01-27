class Example:
    def __init__(self, private_value, protected_value, public_value):
        self.__private_data = private_value  # private attribute
        self._protected_data = protected_value  # protected attribute
        self.public_data = public_value  # public attribute

    # Method สำหรับจัดการ private_data
    def set_private_data(self, value):
        self.__private_data = value

    def get_private_data(self):
        return self.__private_data

    # Method สำหรับจัดการ protected_data
    def set_protected_data(self, value):
        self._protected_data = value

    def get_protected_data(self):
        return self._protected_data

    # Method สำหรับแสดงข้อมูลทั้งหมด
    def display(self):
        print(f"Private Data: {self.__private_data}")
        print(f"Protected Data: {self._protected_data}")
        print(f"Public Data: {self.public_data}")


def main():
    # สร้างวัตถุจากคลาส Example
    example = Example(10, 20, 30)

    # แก้ไขและเข้าถึง private_data ผ่าน Method
    example.set_private_data(50)
    print(f"Private Data (by Method): {example.get_private_data()}")

    # แก้ไขและเข้าถึง protected_data ผ่าน Method
    example.set_protected_data(100)
    print(f"Protected Data (by Method): {example.get_protected_data()}")

    # เข้าถึง public_data โดยตรง
    example.public_data = 300
    print(f"Public Data (direct): {example.public_data}")

    # แสดงข้อมูลทั้งหมด
    example.display()


# เรียกใช้ฟังก์ชัน main เมื่อรันไฟล์นี้โดยตรง
if __name__ == "__main__":
    main()
