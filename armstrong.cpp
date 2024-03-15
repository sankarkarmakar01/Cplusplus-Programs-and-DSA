#include <iostream>
using namespace std;
int main()
{
    int n, temp, r;
    int sum = 0;
    cout << "Enter the number:";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << temp << " is a Armstrong number";
    }
    else
    {
        cout << temp << " is not a Armstrong number";
    }
    return 0;
}