#include <iostream>
#include <queue>
using namespace std;

void deleteMiddle(queue<int>& q) {
    int n = q.size();

    if (n == 0) {
        cout << "Queue is empty";
        return;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int x = q.front();
        q.pop();

        if (i != mid) {
            q.push(x);
        }
    }
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    deleteMiddle(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
