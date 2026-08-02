#include <iostream>
using namespace std;

void symmetricButterflyPattern ()
{
	cout << "enter";
	int n;
	cin >>  n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < n*2 - i*2 ; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i * 2 ; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < n-i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

//int main()
//{
//	symmetricButterflyPattern();
//	return 0;
//}