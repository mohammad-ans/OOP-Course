#include <iostream>
using namespace std;

void stringReverse(char arr[], int i) {
    if (arr[i] == '\0') {
        return;
    }
    stringReverse(arr, i + 1);
    cout << arr[i];
}
int main() {
    char arr[] = "OOP Lab Task";
    stringReverse(arr, 0);
}