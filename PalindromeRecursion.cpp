#include<iostream>

using namespace std;

bool pal(string s, int n)
{
	if (n==(s.length()/2))
	{
		return true;	
	}
	if (s[n] != s[s.length() - 1 - n])
	{

		return false;
	}
	return pal(s, n + 1);

}
//
//void main()
//{
//	string s;
//	cout << "enter:";
//	cin >> s;
//	cout<< ((pal(s, 0)==true)?"The word is a palindrome":"The word is not a palindrome");
//}