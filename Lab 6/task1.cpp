#include <iostream>
#include <cstring>
using namespace std;

void print(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
        cout <<str[i];
    cout << endl;
}
void reversit(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        str[i] = str[i] ^ str[j];
        str[j] = str[i] ^ str[j];
        str[i] = str[i] ^ str[j];
        i++;
        j--;
    }
    int len = strlen(str);
    for (int i = 0; i < len; i++) 
        cout <<str[i];
    cout << endl;
}
int main() {
    const int sz = 20;
    char str[sz];
    cin.get(str, sz, '$');
    print(str);
    reversit(str);
}