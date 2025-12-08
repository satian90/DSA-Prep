#include<iostream>
using namespace std;

void printName(int n)
{
	if (n > 1)
	{
		printName(n - 1);
	}
	cout << "Name"<<" ";
	cout << endl;
}

//int main()
//{
//	cout << "Enter:";
//	int times = 0;
//	cin >> times;
//	printName(times);
//	return 0;
//
//}