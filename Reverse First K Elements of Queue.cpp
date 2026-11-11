#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseK(queue<int>& q, int k) {
    stack<int> s;

    if (k <= 0 || k > q.size())
        return;

    // Push first K elements into stack
    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    // Push stack elements back into queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    // Move remaining elements to the back
    int n = q.size() - k;

    for (int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    reverseK(q, k);

    cout << "Reversed Queue: ";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
