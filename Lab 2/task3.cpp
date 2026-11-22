#include <iostream>

using namespace std;

int main() {
    char c = 0;
    while (1) {
        cout << "Enter Character: ";
        cin >> c;
        c = c | 32;
        if(c == 'a' || c == 'b' || c== 'c') {
            cout << 2;
        }
        else if(c == 'd' || c== 'e' || c =='f')
            cout << 3;
        else if(c == 'g' || c== 'h' || c =='i')
            cout << 4;
        else if(c == 'j' || c== 'k' || c =='l')
            cout << 5;
        else if(c == 'm' || c== 'n' || c =='o')
            cout << 6;
        else if(c == 'p' || c== 'q' || c =='r')
            cout << 7;
        else if(c == 't' || c== 'u' || c =='v')
            cout << 8;
        else if(c == 'w' || c== 'x' || c =='y'|| c =='z')
            cout << 9;
        
        
        cout << "\n0 For Stop otherwise continue: ";
        cin >> c;
        if (c == '0')
            break;
    }


}