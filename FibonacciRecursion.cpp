#include<iostream>
using namespace std;

int fibRecr(int n)
{
	/*int last = 1;
	int secondLast = 0;
	if (n == 0)
	{
		cout << secondLast;
	}
	if (n == 1)
	{
		cout << secondLast << " " << last;
	}
	int c;
	for (int i = 2; i <= n; i++)
	{
		int Num = last + secondLast;
		last = secondLast;
		secondLast = Num;
		cout << Num << " ";
	}*/

	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fibRecr(n - 1) + fibRecr(n - 2);

}

//void main()
//{
//	int enter=0;
//	cout << "Enter:";
//	cin >> enter;
//	int sumFib = fibRecr(enter);
//	cout << sumFib;
//}