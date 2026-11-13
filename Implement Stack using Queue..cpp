#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;

public:

    // Push operation
    void push(int x) {
        q.push(x);

        int n = q.size();

        for (int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << x << " inserted\n";
    }

    // Pop operation
    void pop() {
        if (q.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << q.front() << " deleted\n";
        q.pop();
    }

    // Top operation
    void top() {
        if (q.empty()) {
            cout << "Stack is Empty\n";
        }
        else {
            cout << "Top element: " << q.front() << endl;
        }
    }

    // Display operation
    void display() {
        if (q.empty()) {
            cout << "Stack is Empty\n";
            return;
        }

        queue<int> temp = q;

        cout << "Stack elements: ";

        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }

        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.top();

    s.pop();

    s.display();

    return 0;
}
