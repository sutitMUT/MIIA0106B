# คลาสแม่
class Device:
    def __init__(self, name):
        self.name = name  # ชื่ออุปกรณ์
        self.is_on = False  # สถานะเปิด/ปิด

    def turn_on(self):
        self.is_on = True
        print(f"{self.name} is now ON.")

    def turn_off(self):
        self.is_on = False
        print(f"{self.name} is now OFF.")

    def status(self):
        state = "ON" if self.is_on else "OFF"
        print(f"{self.name} is currently {state}.")


# คลาสลูก: หลอดไฟ
class Light(Device):
    def __init__(self, name, brightness=0):
        super().__init__(name)
        self.brightness = brightness  # ความสว่าง (0-100)

    def set_brightness(self, level):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust brightness.")
            return
        if 0 <= level <= 100:
            self.brightness = level
            print(f"{self.name}'s brightness is set to {self.brightness}%.")
        else:
            print("Invalid brightness level! Please use a value between 0 and 100.")


# คลาสลูก: พัดลม
class Fan(Device):
    def __init__(self, name, speed=0):
        super().__init__(name)
        self.speed = speed  # ความเร็ว (0-3)

    def set_speed(self, level):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust speed.")
            return
        if 0 <= level <= 3:
            self.speed = level
            print(f"{self.name}'s speed is set to level {self.speed}.")
        else:
            print("Invalid speed level! Please use a value between 0 and 3.")


# ฟังก์ชันหลัก
def main():
    # สร้างอุปกรณ์
    living_room_light = Light("Living Room Light")
    bedroom_fan = Fan("Bedroom Fan")

    # ควบคุมหลอดไฟ
    living_room_light.turn_on()
    living_room_light.set_brightness(75)
    living_room_light.status()
    living_room_light.turn_off()

    # ควบคุมพัดลม
    bedroom_fan.turn_on()
    bedroom_fan.set_speed(2)
    bedroom_fan.status()
    bedroom_fan.turn_off()


# เรียกใช้ฟังก์ชัน main
if __name__ == "__main__":
    main()
