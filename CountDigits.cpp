#include<iostream>
#include<cmath>

using namespace std;

void CountDigitsOptimal(int n)
{
	int count = (int)log10(n) + 1;

	cout << "CountOptimal:"<< count<<endl;
}

void CountDigits(int n)
{
	int count = 0;
	while (n>0)
	{
		n = n / 10;
		count++;
	}
	cout << "Count:" << count<<endl;
}

//void main()
//{
//	cout << "Enter:";
//	int n = 0;
//	cin >> n;
//	CountDigitsOptimal(n);
//	CountDigits(n);
//}