#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insertFirst(int value)
{
if (front == 0)
{
cout << "Insertion not possible" << endl;
return;
}

if (front == -1)
{
    front = rear = 0;
}
else
{
    front--;
}

queue[front] = value;
cout << value << " inserted at first position" << endl;

}

void display()
{
if (front == -1)
{
cout << "Queue is empty" << endl;
return;
}

for (int i = front; i <= rear; i++)
{
    cout << queue[i] << " ";
}
cout << endl;

}

int main()
{
insertFirst(10);
insertFirst(20);
insertFirst(30);

display();

return 0;

}