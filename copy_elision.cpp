#include <iostream>
using namespace std;
class elision
{
public:
	elision()
	{
		cout << "Hello";
	}
	elision(const elision &) // Copy Construcctor
	{
		cout << " Hello Copy Constructor";
	}
};

elision func()
{
	return elision();
}

int main()
{
	elision G = func();
	return 0;
}
