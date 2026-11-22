#include <iostream>
using namespace std;

void printArray(int arr[], int i, int end) {
    if (i == end) {
        cout << endl;
        return;
    }
    cout << arr[i] << "  ";
    printArray(arr, i + 1, end);
}
int main() {
    const int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,7,7,1};
    printArray(arr, 0, size);
}