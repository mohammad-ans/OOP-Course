#include <iostream>
using namespace std;

int recursiveMinimum(int arr[], int i, int end) {  // using Maximum integer
    if (i == end) {
        return INT_MAX;
    }
    int res = recursiveMinimum(arr, i + 1, end);
    if (arr[i] < res)
        return arr[i];
    else
        return res;
}
// int recursiveMinimum(int arr[], int i, int end) { 
//     if (i == end - 1) {
//         return arr[i];
//     }
//     int res = recursiveMinimum(arr, i + 1, end);
//     if (arr[i] < res)
//         return arr[i];
//     else
//         return res;
// }
int main() {
    const int size = 10;
    int arr[size] = {1,2,76,40,23,6,7,10,-7,1};
    cout << recursiveMinimum(arr, 0, size) << endl;
    const int size2 = 10;
    int arr2[size2] = {1,2,-76,40,23,6,7,10,-7,1};
    cout << recursiveMinimum(arr2, 0, size2) << endl;
}