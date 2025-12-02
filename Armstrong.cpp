#include <iostream>
#include <string>

using namespace std;

int armstrong(int num)
{
	int sum=0;
	int tempnum = num;
	string s = to_string(tempnum);
	int lenghtofnum = s.length();
	for (int i = 0; i < lenghtofnum; i++)
	{
		int lastdigit = tempnum % 10;
		int powerdigit = pow(lastdigit, lenghtofnum);
		sum += powerdigit;
		tempnum = tempnum / 10;

	}
	return sum;

}

void main()
{
	int num = 0;
	cout << "Enter:";
	cin >> num;
	int sum = armstrong(num);
	cout << "armstrong:" << sum;
}