#include <iostream>
#include <queue>
using namespace std;

int main() {
    string s = "aabc";

    queue<char> q;
    int freq[26] = {0};

    cout << "Output: ";

    for (int i = 0; i < s.length(); i++) {

        char ch = s[i];

        // Increase frequency
        freq[ch - 'a']++;

        // Insert character into queue
        q.push(ch);

        // Remove repeating characters
        while (!q.empty() &&
               freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        // Print first non-repeating character
        if (q.empty()) {
            cout << -1 << " ";
        }
        else {
            cout << q.front() << " ";
        }
    }

    return 0;
}
