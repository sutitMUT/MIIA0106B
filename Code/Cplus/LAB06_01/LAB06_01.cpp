#include <iostream>
using namespace std;

int main() {
    // เก็บคะแนนนักเรียน 10 คน
    int score1, score2, score3, score4, score5;
    int score6, score7, score8, score9, score10;

    cout << "Enter score of Student 1: ";
    cin >> score1;
    cout << "Enter score of Student 2: ";
    cin >> score2;
    cout << "Enter score of Student 3: ";
    cin >> score3;
    cout << "Enter score of Student 4: ";
    cin >> score4;
    cout << "Enter score of Student 5: ";
    cin >> score5;
    cout << "Enter score of Student 6: ";
    cin >> score6;
    cout << "Enter score of Student 7: ";
    cin >> score7;
    cout << "Enter score of Student 8: ";
    cin >> score8;
    cout << "Enter score of Student 9: ";
    cin >> score9;
    cout << "Enter score of Student 10: ";
    cin >> score10;

    // คำนวณผลรวมคะแนน
    int totalScore = score1 + score2 + score3 + score4 + score5 +
        score6 + score7 + score8 + score9 + score10;

    // คำนวณค่าเฉลี่ย
    double averageScore = totalScore / 10.0;

    // แสดงผลลัพธ์
    cout << "\nScores of Students:" << endl;
    cout << "Student 1: " << score1 << endl;
    cout << "Student 2: " << score2 << endl;
    cout << "Student 3: " << score3 << endl;
    cout << "Student 4: " << score4 << endl;
    cout << "Student 5: " << score5 << endl;
    cout << "Student 6: " << score6 << endl;
    cout << "Student 7: " << score7 << endl;
    cout << "Student 8: " << score8 << endl;
    cout << "Student 9: " << score9 << endl;
    cout << "Student 10: " << score10 << endl;

    cout << "\nTotal Score: " << totalScore << endl;
    cout << "Average Score: " << averageScore << endl;

    return 0;
}
