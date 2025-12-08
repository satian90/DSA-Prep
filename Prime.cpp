#include<iostream>
using namespace std;

bool prime(int num)
{
	for (int i = 2; i * i < num; i++)
	{
		if (num <= 1)
			return false;

		if (num % i == 0)
		{
			return false;
		}
		return true;
	}
}

//void main()
//{
//	int num = 0;
//	cout << "Enter:";
//	cin >> num;
//	bool isprime = prime(num);
//
//	cout << (isprime? "Prime" : "NotPrime");
//	
//}