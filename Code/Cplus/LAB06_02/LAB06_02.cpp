#include <iostream>
using namespace std;

int main() {
    // สร้าง Array สำหรับเก็บคะแนน
    int scores[10];
    int totalScore = 0;
    double averageScore;

    // รับคะแนนของนักเรียน 10 คน
    cout << "Enter the scores for 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> scores[i];
        totalScore += scores[i]; // เพิ่มคะแนนเข้าสู่ผลรวม
    }

    // คำนวณค่าเฉลี่ย
    averageScore = static_cast<double>(totalScore) / 10;

    // แสดงผลคะแนนของนักเรียนแต่ละคน
    cout << "\nScores of Students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << scores[i] << endl;
    }

    // แสดงผลรวมคะแนนและค่าเฉลี่ย
    cout << "\nTotal Score: " << totalScore << endl;
    cout << "Average Score: " << averageScore << endl;

    return 0;
}
