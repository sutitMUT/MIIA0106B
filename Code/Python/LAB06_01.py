def main():
    # เก็บคะแนนของนักเรียน 10 คน
    print("Enter the scores for 10 students:")
    score1 = int(input("Student 1: "))
    score2 = int(input("Student 2: "))
    score3 = int(input("Student 3: "))
    score4 = int(input("Student 4: "))
    score5 = int(input("Student 5: "))
    score6 = int(input("Student 6: "))
    score7 = int(input("Student 7: "))
    score8 = int(input("Student 8: "))
    score9 = int(input("Student 9: "))
    score10 = int(input("Student 10: "))

    # คำนวณผลรวมคะแนน
    total_score = (score1 + score2 + score3 + score4 + score5 +
                   score6 + score7 + score8 + score9 + score10)

    # คำนวณค่าเฉลี่ย
    average_score = total_score / 10

    # แสดงผลคะแนนของนักเรียนแต่ละคน
    print("\nScores of Students:")
    print(f"Student 1: {score1}")
    print(f"Student 2: {score2}")
    print(f"Student 3: {score3}")
    print(f"Student 4: {score4}")
    print(f"Student 5: {score5}")
    print(f"Student 6: {score6}")
    print(f"Student 7: {score7}")
    print(f"Student 8: {score8}")
    print(f"Student 9: {score9}")
    print(f"Student 10: {score10}")

    # แสดงผลรวมคะแนนและค่าเฉลี่ย
    print(f"\nTotal Score: {total_score}")
    print(f"Average Score: {average_score:.2f}")

if __name__ == "__main__":
    main()
