#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Insert element
    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        arr[rear] = value;

        cout << value << " inserted\n";
    }

    // Delete element
    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " deleted\n";

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }

    // Display elements
    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue elements: ";
        int i = front;

        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }

    // Show front element
    void peek() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        }
        else {
            cout << "Front element: " << arr[front] << endl;
        }
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();

    q.display();

    q.peek();

    q.enqueue(60);

    q.display();

    return 0;
}
