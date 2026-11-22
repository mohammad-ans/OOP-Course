#include <bits/stdc++.h>
using namespace std;

void initializeArray(int* p, int size) {
    for (int i = 0; i < size; i++)
        p[i] = rand() % 99;
}
int main() {
    srand(time(0));
    int size = 10;
    int *p = new int[size];
    initializeArray(p, size);
    int *p2 = p;
    for (int i = 0; i < size; i++, p2++) 
        cout << *p2 << " ";
    cout << endl;
}