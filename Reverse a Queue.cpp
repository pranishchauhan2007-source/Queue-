#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
queue<int> q;
stack<int> s;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

while (!q.empty()) {
    s.push(q.front());
    q.pop();
}

while (!s.empty()) {
    q.push(s.top());
    s.pop();
}

cout << "Reverse Queue: ";

while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}

return 0;

}