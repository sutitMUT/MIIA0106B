def main():
    # สร้าง list สำหรับเก็บคะแนน
    scores = []

    # รับคะแนนของนักเรียน 10 คน
    print("Enter the scores for 10 students:")
    for i in range(1, 11):
        score = int(input(f"Student {i}: "))
        scores.append(score)

    # คำนวณผลรวมคะแนน
    total_score = sum(scores)

    # คำนวณค่าเฉลี่ย
    average_score = total_score / len(scores)

    # แสดงผลคะแนนของนักเรียนแต่ละคน
    print("\nScores of Students:")
    for i, score in enumerate(scores, start=1):
        print(f"Student {i}: {score}")

    # แสดงผลรวมคะแนนและค่าเฉลี่ย
    print(f"\nTotal Score: {total_score}")
    print(f"Average Score: {average_score:.2f}")

if __name__ == "__main__":
    main()
