#include <iostream>
using namespace std;

// Implement Queue using Array
class Queue
{
    int *arr;
    int front, rear, size;

public:
    // Constructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = -1;
        rear = -1;
    }

    // Check whether queue is empty
    bool IsEmpty()
    {
        return front == -1;
    }

    // Check whether queue is full
    bool IsFull()
    {
        return rear == size - 1;
    }

    // Insert element into queue
    void push(int x)
    {
        if (IsFull())
        {
            cout << "Queue Overflow\n";
            return;
        }

        if (IsEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = x;
    }

    // Delete element from queue
    void pop()
    {
        if (IsEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Deleted element: " << arr[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    // Display queue elements
    void display()
    {
        if (IsEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();

    q.pop();

    q.display();

    return 0;
}