#include <iostream>
using namespace	std;

bool palindrome(int actualNum)
{
	int num = actualNum;

		int revnum = 0;
		while (num > 0)
		{
			int lastdigit = num % 10;

			revnum = revnum * 10;
			revnum += lastdigit;

			num = num / 10;
		}
		if (actualNum == revnum)
		{
			return true;
		}
		else
		{
			return false;
		}
}

//void main()
//{
//	int n;
//	cout << "enter:";
//	cin >> n;
//	bool pal = palindrome(n);
//
//	cout << (pal ? "The no. is a palindrome" : "the no. is not a palindrome");
//}