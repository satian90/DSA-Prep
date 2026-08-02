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

vector<int> divisorsOptimal(int num)
{
	vector<int> divisorList;
	for (int i = 1; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			divisorList.push_back(i);

			if (i != num / i)
			{
				divisorList.push_back(num / i);
			}
		}
		
	}

	return divisorList;
}

//
//void main()
//{
//	int num = 0;
//	cout << "enter:";
//	cin >> num;
//
//	vector<int> divisorsList = divisors(num);
//
//	vector<int> divisorListOptimal = divisorsOptimal(num);
//
//	for (int divisor : divisorsList)
//	{
//		cout << divisor << " ";
//	}
//	cout << "Optimal"<< endl;
//	for (int divisorO : divisorListOptimal)
//	{
//		cout << divisorO << " ";
//	}
//}