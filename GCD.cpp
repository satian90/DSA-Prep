#include <iostream>
using namespace std;

int gcd(int num1,int num2)
{
	int small = num1 < num2 ? num1 : num2;

	for (int i = small; i > 0; i--)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			return i;			
		}
		
	}
	return 0;
}

//void main()
//{
//	int num1 = 0, num2 = 0;
//
//	cout << "Enter nos.";
//
//	cin >> num1>>num2;
//
//	int gcdivisor = gcd(num1, num2);
//
//	cout << "Greatest divisor is:"<<gcdivisor;
//	
//}