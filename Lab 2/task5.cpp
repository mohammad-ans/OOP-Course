#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool leap(int year) {
    if (year % 4 == 0)
        if (year % 100 != 0)
            return true;
        else
            if (year % 400 == 0)
                return true;
            else
                return false;

    return false;
}
int calculate(int month, bool leap) {
    int ans = 0;
    if (leap && month > 2)
        ans += 1;
    int i;
    for (i = 1; i < month && i < 8; i++) 
        if ((i & 1) == 1)
            ans += 31;
        else if (i == 2)
            ans += 28;
        else
            ans += 30; 
    
    for (; i < month; i++)
        if ((i & 1) == 0)
            ans += 31;
        else
            ans += 30;
    return ans;

}
int main() {
    cout << "Enter Date: ";
    string date;
    cin >> date;
    // cout << date;  
    istringstream dat(date); 
    int day, month, year, ans;
    dat >> month >> day >> year;
    // cout << day << "   " << month << "  " << year<< endl;
    // cout << leap(-year);
    cout << calculate(month, leap(-year)) - day;
}