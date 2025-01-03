def find_max(arr):
    """ฟังก์ชันสำหรับหาค่ามากที่สุดในอาร์เรย์"""
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

def find_min(arr):
    """ฟังก์ชันสำหรับหาค่าน้อยที่สุดในอาร์เรย์"""
    min_val = arr[0]
    for num in arr:
        if num < min_val:
            min_val = num
    return min_val

def main():
    # รับขนาดของอาร์เรย์จากผู้ใช้
    size = int(input("Enter the size of the array: "))

    # รับค่าของอาร์เรย์
    arr = []
    print(f"Enter {size} elements:")
    for _ in range(size):
        num = int(input())
        arr.append(num)

    # หาค่ามากที่สุดและน้อยที่สุด
    max_val = find_max(arr)
    min_val = find_min(arr)

    # แสดงผลลัพธ์
    print(f"\nMaximum value in the array: {max_val}")
    print(f"Minimum value in the array: {min_val}")

if __name__ == "__main__":
    main()
