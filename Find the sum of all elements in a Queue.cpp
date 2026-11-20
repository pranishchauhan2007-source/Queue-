#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n, x, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter queue elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }

    while(!q.empty())
    {
        sum = sum + q.front();
        q.pop();
    }

    cout << "Sum of all elements = " << sum;

    return 0;
}