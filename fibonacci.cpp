#include <iostream>
using namespace std;
int main()
{
    int range;
    int n1, n2, n3;
    n1 = 0;
    n2 = 1;
    cout<<"Enter the range:";
    cin>>range;
    cout << n1 << " " << n2 << " ";
    for (int i = 1; i <= range-2; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}