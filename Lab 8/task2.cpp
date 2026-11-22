#include <bits/stdc++.h>
using namespace std;

void func(int *p1, int *p2) {
    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2;
}
int main() {
    int a = 10;
    int b = 1;
    int *p1 = &a;
    int *p2 = &b;
    cout << "A: " << a << "\nB: " << b << endl;
    func(p1, p2);
    cout << "A: " << a << "\nB: " << b << endl;
    func(&a, &b);
    cout << "A: " << a << "\nB: " << b << endl;
}