#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(25);
    q.push(15);
    q.push(40);
    q.push(30);

    int maximum = q.front();

    while (!q.empty()) {
        if (q.front() > maximum) {
            maximum = q.front();
        }
        q.pop();
    }

    cout << "Maximum Element: " << maximum;

    return 0;
}
