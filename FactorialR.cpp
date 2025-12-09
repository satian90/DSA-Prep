#include<iostream>
using namespace std;

int factorial(int till)
{
	if (till == 1)
	{
		return 1;
	}
	return till * factorial(till - 1);
}


int main()
{
	cout << "Enter:";
	int  input = 0;
	cin >> input;

	cout << "Factorial is :" << factorial(input);
	return 0;
}