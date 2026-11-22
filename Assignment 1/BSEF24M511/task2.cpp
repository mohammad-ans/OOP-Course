#include <iostream>
using namespace std;

class dayType {
    string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day;
public:
    dayType(){
        this->day = 0;
    }
    dayType(string day) {
        if (!set(day)) {
            cout << "Entered day was invalid, so set to Monday\n";
        }
    }
    bool set(const string &day);
    void print();
    string returnDay();
    string previous();
    string next();
    dayType operator+(int num) {
        this->day = (this->day + num) % 7;
        return *this; 
    }
};

int main() {
    int choice = 0, num;
    for (int i = 0; i < 100; i++) {
        cout << "Enter 1 to continue : ";
        cin >> choice;
        if (choice != 1) {
            break;
        }
        cout << "Day: ";
        string day;
        cin >> day;
        dayType testObj(day);
        testObj.print();
        cout << "Enter number to add: ";
        cin >> num;
        testObj = testObj + num;
        cout << "Current: " << testObj.returnDay() << endl;
        cout << "Previous: " << testObj.previous() << endl;
        cout << "Next: " << testObj.next() << endl;
    }
}

bool dayType::set(const string &day) {
    if (day.length() < 3)
        return false;
    int i, j, flag;
    for (i = 0; i < 7; i++) {
        flag = 0;
        this->day = i;
        for (j = 0; j < 3; j++) {
            if (day[j] != days[i][j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) 
            break;
    }
    if (i == 7) {
        this->day = 0;
        return false;
    }
    return true;
}

void dayType::print() {
    cout << "Current day: " << days[this->day] << endl;
}
string dayType::returnDay() {
    return days[this->day];
}
string dayType::previous() {
    if (this->day == 0)
        return days[6];
    return days[this->day - 1];
}
string dayType::next() {
    if (this->day == 6)
        return days[0];
    return days[this->day + 1];
}