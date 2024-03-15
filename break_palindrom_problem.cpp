#include <iostream>
using namespace std;
class solution
{
public:
    string breakPalindrom(string palindrom)
    {
        int n = palindrom.size();
        if (n <= 1)
            return "";

        for (int i = 0; i < n / 2; i++)
        {
            if (palindrom[i] != 'a')
            {
                palindrom[i] = 'a';
                return palindrom;
            }
        }
        palindrom[n - 1] = 'b';
        return palindrom;
    }
};
int main()
{
    solution s;
    cout<<s.breakPalindrom("abccaa");
    return 0;
}