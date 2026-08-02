#include<iostream>
#include<vector>

using namespace std;

void revarray(vector<int>& arr)
{
	int p1 = 0;
	int p2 = arr.size() - 1;

	while (p1 < p2)
	{
		swap(arr[p1], arr[p2]);

		p1++;
		p2--;

	} 
}

//void main()
//{
//	vector<int> arr = { 5,4,3,2,1,0 };
//	revarray(arr);
//	for (int num : arr)
//	{
//		cout << num<<" ";
//	}
//
//} 