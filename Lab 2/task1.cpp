#include <iostream>

using namespace std;

int one(int x, int y) {
    if (x > y)
        return x + y;
    return x - 2*y;
}
int main() {
    int x = 6, y = 5;
    cout << one(x, y) << endl;
}