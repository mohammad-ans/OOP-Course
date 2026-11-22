#include <iostream>
using namespace std;
void print_prime(int arr[], int size) {
    for (int i = 2; i < size; i++) 
        if (arr[i])
            cout << i << "  "; 
    cout << endl;
}
int main() {
    int arr[1000] = {1};
    for (int i = 0; i < 1000; i++) 
        arr[i] = 1;

    for (int i = 2; i < 1000; i++) {
        for (int j = i * 2; j < 1000; j += i) // j = all multiples of i < 1000
            arr[j] = 0;
    }
    print_prime(arr, 1000);
}