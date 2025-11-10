#include <iostream>
using namespace std;

void symmetricButterflyPattern ()
{
	cout << "enter";
	int count;
	cin >>  count;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

int main()
{
	symmetricButterflyPattern();
	return 0;
}