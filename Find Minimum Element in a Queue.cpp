
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(25);
    q.push(5);
    q.push(40);
    q.push(30);

    int minimum = q.front();

    while (!q.empty()) {
        if (q.front() < minimum) {
            minimum = q.front();
        }
        q.pop();
    }

    cout << "Minimum Element: " << minimum;

    return 0;
}
