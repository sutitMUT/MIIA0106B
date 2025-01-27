class BankAccount:
    def __init__(self, owner_name, initial_balance):
        self.bank_name = None  # public attribute
        self.__owner = owner_name  # private attribute
        self.__balance = max(0, initial_balance)  # private attribute

    # Method สำหรับฝากเงิน
    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
            print(f"Deposited: {amount}")
        else:
            print("Invalid deposit amount!")

    # Method สำหรับถอนเงิน
    def withdraw(self, amount):
        if amount > 0 and amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrawn: {amount}")
        else:
            print("Invalid withdrawal amount!")

    # Method สำหรับดูยอดเงิน
    def get_balance(self):
        return self.__balance

    # Method สำหรับดูชื่อเจ้าของบัญชี
    def get_owner(self):
        return self.__owner


def main():
    account = BankAccount("Alice", 1000.0)
    account.bank_name = "KTB"  # กำหนดชื่อธนาคาร

    # แสดงยอดเงินเริ่มต้น
    print(f"Initial Balance: {account.get_balance()}")
    
    # ฝากเงิน
    account.deposit(500.0)
    
    # ถอนเงิน
    account.withdraw(300.0)
    account.withdraw(2000.0)  # ถอนเกินยอดเงินในบัญชี
    
    # แสดงยอดเงินสุดท้าย
    print(f"Final Balance: {account.get_balance()}")

    # แสดงข้อมูลบัญชี
    print(f"Bank Name: {account.bank_name}")
    print(f"Owner: {account.get_owner()}")
    print(f"Balance: {account.get_balance()}")


# เรียกใช้ฟังก์ชัน main
if __name__ == "__main__":
    main()
