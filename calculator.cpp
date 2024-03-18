#include <iostream>
using namespace std;
int main()
{
    float a, b, result;
    char op;
    result = 0;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    cout << "Enter the operator:";
    cin >> op;
    switch (op)
    {
    case '+':
        result = a + b;
        cout << a << " + " << b << ":" << result << endl;
        break;
    case '-':
        result = a - b;
        cout << a << " - " << b << ":" << result << endl;
        break;
    case '*':
        result = a * b;
        cout << a << " * " << b << ":" << result << endl;
        break;
    case '/':
        result = a / b;
        cout << a << " / " << b << ":" << result << endl;
        break;
    default:
        cout << "Wrong choice! Please enter a valid arithmetical operator" << endl;
    }
    return 0;
}