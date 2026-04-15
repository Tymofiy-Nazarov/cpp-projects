#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int* CreateArray(const int n)
{
	return new int[n];
}
void CreateArray(const int n, int*& arr)
{
	arr = new int[n];
}
void PrintArray(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void DeleteArray(int*& arr)
{
	delete[] arr;
	arr = nullptr;
}
int main()
{
	const int n = 5;
	int* arr = 0;
	CreateArray(n, arr);
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	PrintArray(arr, n);
	DeleteArray(arr);
	return 0;
}