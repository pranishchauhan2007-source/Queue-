#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    queue<string> q;

    q.push("1");

    for (int i = 1; i <= n; i++) {
        string s = q.front();
        q.pop();

        cout << s << " ";

        q.push(s + "0");
        q.push(s + "1");
    }

    return 0;
}
