#include <iostream>
using namespace std;

int main() {
    int arr[10], priority[10];
    int n = 0;

    // Insert elements
    arr[n] = 10;
    priority[n++] = 2;

    arr[n] = 20;
    priority[n++] = 1;

    arr[n] = 30;
    priority[n++] = 3;

    // Delete highest priority element
    int pos = 0;

    for (int i = 1; i < n; i++) {
        if (priority[i] < priority[pos]) {
            pos = i;
        }
    }

    cout << "Deleted element: " << arr[pos] << endl;

    // Shift remaining elements
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
        priority[i] = priority[i + 1];
    }

    n--;

    // Display queue
    cout << "Remaining elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
