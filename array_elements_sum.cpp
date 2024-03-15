#include<iostream>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX];
    int n,i;
    int sum=0;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is:"<<sum;
}