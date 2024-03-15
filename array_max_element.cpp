#include <iostream>
using namespace std;
#define MAX 100
int main()
{
    int arr[MAX];
    int max, min, n, i;
    cout << "Enter the array size:";
    cin >> n;
    cout << "Enter the array elements:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << "The Maximum number is:" << max << endl;
    cout << "The Minimum number is:" << min;
    return 0;
}