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
void selectionSort(int arr[], int i, int end) {
    if (i == end) {
        return;
    }
    int min = i;
    for (int j = i + 1; j < end; j++) 
        if (arr[min] > arr[j])
            min = j;
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
    selectionSort(arr, i + 1, end);
}
int main() {
    const int size = 10;
    int arr[size] = {1,20,3,4,5,6,7,-7,7,1};
    printArray(arr, 0, size);
    selectionSort(arr, 0, size);
    printArray(arr, 0, size);
}