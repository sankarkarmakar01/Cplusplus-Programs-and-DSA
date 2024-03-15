#include <iostream>
using namespace std;
void checkVowel(char chk)
{
    if (chk == 'a' || chk == 'A' || chk == 'e' ||
        chk == 'E' || chk == 'i' || chk == 'I' ||
        chk == 'o' || chk == 'O' || chk == 'u' || chk == 'U')
        cout << "It is a vowel" << endl;
    else
        cout << "It is a consonant" << endl;
}
int main()
{
    char inp;
    cout << "The character: ";
    cin >> inp;
    checkVowel(inp);
    return 0;
}