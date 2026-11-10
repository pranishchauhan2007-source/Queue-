
#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:

    // Insert element
    void enqueue(int x) {
        s1.push(x);
        cout << x << " inserted\n";
    }

    // Delete element
    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << s2.top() << " deleted\n";
        s2.pop();
    }

    // Display front element
    void front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Front element: " << s2.top() << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.front();

    q.dequeue();
    q.dequeue();

    q.front();

    return 0;
}
