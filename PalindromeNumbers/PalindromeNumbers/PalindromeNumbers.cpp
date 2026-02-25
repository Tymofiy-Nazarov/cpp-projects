#include <iostream>

using namespace std;

int main()
{
	cout << "For checking if it's a palindrome input number: " << endl;
	int k;
	cin>>k;
	int x = k;
	int reverse = 0;
	while (x != 0)
	{
		int d = x % 10;
		reverse = reverse * 10 + d;
		x = x / 10;
	}
	if (reverse == k)
	{
		cout << "It's a palindrome ";
    }
	else cout << "It's not a palindrome ";
}
