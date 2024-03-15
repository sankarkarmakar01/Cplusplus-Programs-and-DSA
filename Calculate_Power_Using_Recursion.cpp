#include<iostream>
using namespace std;
int calculate(int b,int p)
{
    if(p!=0)
    {
        return b*calculate(b,p-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int b,p,result;
    cout<<"Enter the base:";
    cin>>b;
    cout<<"Enter the power:";
    cin>>p;
    result=calculate(b,p);
    cout<<b<<"^"<<p<<"="<<result;
    return 0;
}