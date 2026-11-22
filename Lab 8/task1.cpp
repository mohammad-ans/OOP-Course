#include <bits/stdc++.h>
using namespace std;

void func(int a, int allias, int* p) {
    *p = 9;
    a = 6;
    allias = 10;
    cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
}

// void bonus_func(int a, int allias, int* p) {
//     *p = 9;
//     a = 6;
//     allias = 10;
//     cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
// }
void bonus_func(int &a, int allias, int* p) {
    p = &a;
    *p = 9;
    a = 6;
    allias = 10;
    cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
}
int main() {
    int a = 10;
    int& allias = a;
    int* p = &a;
    cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
    cout << "A address: " << &a << "\nAllias address: " << &allias << "\nPointer Value: " << p << endl;
    func(a, allias, p);
    cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
    p = nullptr;
    bonus_func(a, allias, p);
    cout << "A: " << a << "\nAllias: " << allias << "\nValue at Pointer " << *p << endl;
}