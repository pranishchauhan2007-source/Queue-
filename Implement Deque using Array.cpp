#include <iostream>
using namespace std;

#define SIZE 5

class Deque {
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at Front
    void insertFront(int x) {
        if ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1)) {
            cout << "Deque Overflow\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = SIZE - 1;
        }
        else {
            front--;
        }

        arr[front] = x;
    }

    // Insert at Rear
    void insertRear(int x) {
        if ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1)) {
            cout << "Deque Overflow\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == SIZE - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = x;
    }

    // Delete from Front
    void deleteFront() {
        if (front == -1) {
            cout << "Deque Underflow\n";
            return;
        }

        cout << arr[front] << " deleted\n";

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    // Delete from Rear
    void deleteRear() {
        if (front == -1) {
            cout << "Deque Underflow\n";
            return;
        }

        cout << arr[rear] << " deleted\n";

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = SIZE - 1;
        }
        else {
            rear--;
        }
    }

    // Display Deque
    void display() {
        if (front == -1) {
            cout << "Deque is Empty\n";
            return;
        }

        cout << "Deque elements: ";
        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {
    Deque d;

    d.insertRear(10);
    d.insertRear(20);
    d.insertRear(30);

    d.display();

    d.insertFront(5);
    d.display();

    d.deleteFront();
    d.display();

    d.deleteRear();
    d.display();

    return 0;
}
