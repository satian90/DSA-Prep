#include<iostream>
#include<cmath>

using namespace std;

void CountDigits(int n)
{
	int count = (int)log10(n) + 1;

	cout << "Count:"<< count;
}

void main()
{
	CountDigits(656654364);
}