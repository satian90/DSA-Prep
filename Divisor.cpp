#include <iostream>
#include <vector>

using namespace std;

vector<int> divisors(int num)
{
	vector<int> divisorsList;

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			divisorsList.push_back(i);
		}
	}
	return divisorsList;
}

void main()
{
	int num = 0;
	cout << "enter:";
	cin >> num;

	vector<int>divisorsList = divisors(num);
	for (int divisor : divisorsList)
	{
		cout << divisor << " ";
	}
}