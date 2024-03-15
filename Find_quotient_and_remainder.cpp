#include<iostream>
using namespace std;
int main()
{
    int num,d;
    int q,r;
    cout<<"Enter the first number:";
    cin>>num;
    cout<<"Enter the second number:";
    cin>>d;
    q=num/d;
    r=num%d;
    cout<<"Quotient is:"<<q<<endl;
    cout<<"Remsinder is:"<<r;
    return 0;
}