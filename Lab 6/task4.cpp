#include <iostream>
using namespace std;
class Queue{
    int front, rear;
    static const int size = 20;
    int arr[size];
public:
    Queue() {
        front = -1, rear = -1;
    }
    void put(int val) {
        if (rear == -1)
            rear = 0;
        if (rear == size && front == -1) {
            cout << "Queue is Full....\n";
            return;
        }
        else if (rear == size) {
            rear = front - 1;
        }
        arr[rear] = val;
        rear++;
    }
    int get() {
        if (front == rear) {
            cout << "Queue is Empty.....\nReturning -1.....";
            return -1;
        }
        else if (front == -1 || front == size)
            front = 0;
        else if (front == size)
            front = -1;
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