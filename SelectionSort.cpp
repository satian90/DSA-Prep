#include <iostream>

using namespace std;
void selectionSort(int a[], int lengthOfArr)
{
	for (int i = 0; i <lengthOfArr-1 ; i++)
	{
		for (int j = i+1; j < lengthOfArr; j++)
		{
			if (a[j] < a[i])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < lengthOfArr; i++)
	{
		cout << a[i]<<", ";
	}
}
void main()
{
	int arr[] = { 13, 46, 24, 52, 20, 9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, length);
}