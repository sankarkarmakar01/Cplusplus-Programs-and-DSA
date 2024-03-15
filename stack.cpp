#include <iostream>
using namespace std;
#define MAX 100
class stack
{
private:
    int stack[MAX];
    int i, n, item, ditem, top = -1;

public:
    void peek();
    void push();
    void pop();
    void display();
};
void stack::peek()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top is:" << stack[top] << endl;
    }
}
void stack::push()
{
    if (top == MAX - 1)
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
        cout << "Enter the item:";
        cin >> item;
        top++;
        stack[top] = item;
    }
}
void stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is Underflow" << endl;
    }
    else
    {
        ditem = stack[top];
        cout << "The deleted item is:" << ditem << endl;
        top--;
    }
}
void stack::display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "The all item of the stack are:";
        for (i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    stack s;
    while (1)
    {
        int c;
        cout << "1 for peek operation" << endl;
        cout << "2 for push operation" << endl;
        cout << "3 for pop operation" << endl;
        cout << "4 for display operation" << endl;
        cout << "5 for exit" << endl;
        cout << "Enter your choice:";
        cin >> c;
        switch (c)
        {
        case 1:
            s.peek();
            break;
        case 2:
            s.push();
            break;
        case 3:
            s.pop();
            break;
        case 4:
            s.display();
            break;
        case 5:
            cout << "Exit" << endl;
            exit(0);
            break;
            default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}