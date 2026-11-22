#include <iostream>
using namespace std;

int reverse(int n) {
    if (n == 0 || n / 10 == 0)
        return n;
    int ans = 0;
    while (n != 0) {
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Reverse Number: " << reverse(n) << endl;
}