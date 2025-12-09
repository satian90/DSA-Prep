#include<iostream>
using namespace std;

int sumofnaturalnumber(int till)
{
	if (till == 1)
	{
		return 1;
	}
	
	return till + sumofnaturalnumber(till - 1);
	
}


int main()
{
	cout << "Enter:";
	int  input = 0;
	cin >> input;

	cout <<"Sum is :"<< sumofnaturalnumber(input);
	return 0;
}