#include<iostream>
using namespace std;

bool prime(int num)
{
	for (int i = 1; i * i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
		return true;
	}
}

void main()
{
	int num = 0;
	cout << "Enter:";
	cin >> num;
	bool isprime = prime(num);
	
}