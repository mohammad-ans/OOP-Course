#include <iostream>

using namespace std;

int main() {
    int c;
    cin >> c;
    switch(c) {
        case 1 || 2:
            cout << "running";
            break;
        default:
            cout << "not running";
    }
}