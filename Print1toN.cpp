#include<iostream>
using namespace std;

void print1ton(int n)
{
	if (n > 1)
	{
		print1ton(n - 1);
	}

	cout << n;
	cout << endl;

}

//int main()
//{
//	cout << "Enter:";
//	int  input = 0;
//	cin >> input;
//
//	print1ton(input);
//	return 0;
//}