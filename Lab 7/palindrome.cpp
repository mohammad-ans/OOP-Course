#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char arr[], int i, int j) {
    if (i >= j)
        return true;
    if (arr[i] == ' ' || arr[i] == '.' || arr[i] == ',' || arr[i] == ';' || arr[i] == ':' || arr[i] == '!' || arr[i] == '?') {
        return palindrome(arr, i + 1, j);
    }
    if (arr[j] == ' ' || arr[j] == '.' || arr[j] == ',' || arr[j] == ';' || arr[j] == ':' || arr[j] == '!' || arr[j] == '?') {
        return palindrome(arr, i, j - 1);
    }
    if ((arr[i] | 32)!= (arr[j] | 32)) // or with 32 to ignore case
        return false;
    return palindrome(arr, i + 1, j - 1);
}
int main() {
    const int size = 6;
    char arr[6][32] = {"OOP Lab Task", "madam", "radar", "able was i ere i saw elba", "a man a plan a canal panama", "able was not i ere i saw elba"};
    for (int i = 0; i < size; i++) {
        int end = strlen(arr[i]);
        if (palindrome(arr[i], 0, end - 1))
            cout << "Palindrome\n";
        else
            cout << "Not a Palindrome\n";
    }
}