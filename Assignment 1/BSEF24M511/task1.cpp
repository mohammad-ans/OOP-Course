#include <iostream>
using namespace std;
class romanType{
    string roman;
    int decimal;
    int conversion() {
        int ans = 0, current = 0, previous = 0;
        for (int i = roman.length() - 1; i >= 0; i--) {
            switch (roman[i] | 32)
            {
                case 'i':
                    current = 1;
                    break;
                case 'v':
                    current = 5;
                    break;
                case 'x':
                    current = 10;
                    break;
                case 'l':
                    current = 50;
                    break;
                case 'c':
                    current = 100;
                    break;
                case 'd':
                    current = 500;
                    break;
                case 'm':
                    current = 1000;
                    break;
            }
            if (current >= previous)
                ans += current;
            else
                ans -= current;
            previous = current;
        }
        return ans;
    }
public:
    romanType(const string &roman) {
        this->roman = roman;
        this->decimal = conversion();
    }
    void printRoman() {
        cout << "Roman number: " << roman << endl;
    }
    void printDecimal() {
        cout << "Decimal number: " << decimal << endl;
    }
};
int main() {
    int choice;
    string tests[] = {"MCXIV", "CCCLIX", "MDCLXVI"};
    for (string roman: tests) {
        romanType testObj(roman);
        cout << "Enter 10 for decimal number or any other number for roman: ";
        cin >> choice;
        if (choice == 10)
            testObj.printDecimal();
        else
            testObj.printRoman();
    }
}