#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

class MinMaxResult
{
public:
	int min;
	int max;
	int minIndex;
	int maxIndex;
};
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
MinMaxResult FindMaxMin(int* arr, const int n)
{
    MinMaxResult result;
    result.min = arr[0];
    result.max = arr[0];
    result.minIndex = 0;
    result.maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > result.max)
        {
            result.max = arr[i];
            result.maxIndex = i;
        }
        if (arr[i] < result.min)
        {
            result.min = arr[i];
            result.minIndex = i;
        }
    }
    return result;
}
void ArrayToFile(const std::string& filename,int*& arr, const int n)
{
	ofstream ofs(filename);
	if (!ofs)
	{
		cout << "Can't open file with such name";
		return;
	}
	for (int i = 0; i < n-1; i++)
	{
		ofs << arr[i]<<" ";
	}
	ofs << arr[n - 1] << endl;
}
void ReadArrayFromFile(const std::string& filename, int*& arr, const int n)
{
	ifstream ifs(filename);
	if (!ifs)
	{
		cout<<"Can't open file with such name";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		ifs >> arr[i];
	}
}
int main()
{
	const int n = 5;
	int* arr = 0;
	CreateArray(n, arr);
	ReadArrayFromFile("output.txt", arr, n);
	/*arr[0] = 20;
	arr[1] = 10;
	arr[2] = 50;
	arr[3] = 70;
	arr[4] = 30;*/
	PrintArray(arr, n);
	ArrayToFile("output.txt", arr, n);
	MinMaxResult res = FindMaxMin(arr, n);
		cout << "Minimum: " << res.min << " (index " << res.minIndex << ")" << endl;
		cout << "Maximum: " << res.max << " (index " << res.maxIndex << ")" << endl;
    DeleteArray(arr);
	return 0;
}