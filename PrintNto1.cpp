#include <iostream>
using namespace std;

void printNto1(int num)
{

	cout << num;
	cout << endl;
	if (num > 1)
	{
		printNto1(num - 1);
	}
	
}

//
//int main()
//{
//	cout << "Enter:";
//	int  input = 0;
//	cin >> input;
//
//	printNto1(input);
//	return 0;
//}