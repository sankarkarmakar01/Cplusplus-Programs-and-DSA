#include <iostream>
using namespace std;
#define MAX 100
class queue
{
private:
    int queue[MAX];
    int i, item, n;
    int front = -1, rear = -1;

public:
    void enqueue();
    void dequeue();
    void display();
};
void queue::enqueue()
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Overflow" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        cout << "Enter the item:";
        cin >> item;
        rear++;
        queue[rear] = item;
    }
}
void queue::dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is Underflow" << endl;
    }
    else
    {

        cout << "The deleted item is:" << queue[front] << endl;
        front++;
    }
}
void queue::display()
{
    if (rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "The elements are:";
        for (i = front; i <=rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    queue q;
    while (1)
    {
        int c;
        cout << "1 for insert operation" << endl;
        cout << "2 for delete operation" << endl;
        cout << "3 for display operation" << endl;
        cout << "4 for exit" << endl;
        cout << "Enter your choice:";
        cin >> c;
        switch (c)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "Exit" << endl;
            exit(0);
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}