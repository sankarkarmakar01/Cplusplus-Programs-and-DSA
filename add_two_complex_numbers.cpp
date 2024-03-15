#include <iostream>
using namespace std;
class complex
{
private:
    int r1, r2, i1, i2, rsum, isum;

public:
    void input();
    void calculation();
    void output();
};
void complex::input()
{
    cout << "Enter the first real number:";
    cin >> r1;
    cout << "Enter the second real number:";
    cin >> r2;
    cout << "Enter the first imaginary number:";
    cin >> i1;
    cout << "Enter the second imaginary number:";
    cin >> i2;
    cout << "First complex number is:" << r1 << " + " << i1 << "i" << endl;
    cout << "second complex number is:" << r2 << " + " << i2 << "i" << endl;
}
void complex::calculation()
{
    rsum = r1 + r2;
    isum = i1 + i2;
}
void complex::output()
{
    cout << "The result is:" << rsum << " + " << isum << "i" << endl;
}
int main()
{
    complex c;
    c.input();
    c.calculation();
    c.output();
    return 0;
}