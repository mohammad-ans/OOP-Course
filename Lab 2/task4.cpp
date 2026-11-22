#include <iostream>

using namespace std;

int getScore() {
    int score;
    cout << "Course score: ";
    cin >> score;
    cout << "Course score: " << score << endl;
    return score;
}
void printGrade(int score) {
    if (score >= 90)
        cout << "Grade: A" << endl;
    else if (score >= 80)
        cout << "Grade: B" << endl;
    else if (score >= 70)
        cout << "Grade: C" << endl;
    else if (score >= 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
    
}
int main() {
   int score = getScore();
   printGrade(score);
}