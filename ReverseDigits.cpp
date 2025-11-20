#include<iostream>

using namespace std;

void reverseDigit(int n)
{
	int num=0;
	while (n)
	{
		int d = n % 10;
		n = n / 10;
				
		num += d;
		if(n!=0)
		num = num * 10;
		
	}
	cout << num;
}

void main()
{
	cout << "Enter:";
	int t;
	cin >> t;
	reverseDigit(t);
}