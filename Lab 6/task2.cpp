#include <iostream>
using namespace std;
class Queue{
    int front, rear;
    static const int size = 20;
    int arr[size];
public:
    Queue() {
        front = 0, rear = 0;
    }
    void put(int val) {
        if (rear == size) {
            cout << "Queue is Full\n";
            return;
        }
        arr[rear] = val;
        rear++;
    }
    int get() {
        if (front == rear) {
            cout << "Queue is Empty.....\nReturning -1.....";
            return -1;
        }
        return arr[front++]; 
    }
};
int main() {
    Queue first;
    cout << first.get() << endl;
    first.put(10);
    first.put(30);
    first.put(20);
    cout << first.get() << endl << first.get() << endl << first.get() << endl ;
}