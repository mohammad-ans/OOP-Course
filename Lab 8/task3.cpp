#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < size; i++)
        cout << *(arr + i) << " ";
    cout << endl;
    return 0;
}