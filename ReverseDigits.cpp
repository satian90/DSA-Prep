#include<iostream>

using namespace std;

int reverseDigit(int n)
{
	int num=0;
	while (n != 0)
	{
		int INTM = 2147483647;
		int INTMIN = -2147483648;
		int d = n % 10;
		n = n / 10;

		num += d;
		if (n != 0)
			num = num * 10;
		if (num > INTM || num < INTMIN)
			return 0;
		
	}
	cout << num;
}

//void main()
//{
//	cout << "Enter:";
//	int t;
//	cin >> t;
//	reverseDigit(t);
//}