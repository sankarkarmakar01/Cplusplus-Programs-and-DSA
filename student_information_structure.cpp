#include <iostream>
using namespace std;
struct student
{
    char name[25];
    int roll;
    float marks;
};
int main()
{
    student s;
    cout << "Enter the student name:";
    cin >> s.name;
    cout << "Enter the student roll:";
    cin >> s.roll;
    cout << "Enter the student marks:";
    cin >> s.marks;
    cout << s.name << " " << s.roll << " " << s.marks;
    return 0;
}