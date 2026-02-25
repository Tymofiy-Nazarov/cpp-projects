#include <iostream>

using namespace std;

int main()
{
	cout << "Enter palindrome: ";
	string s;
	cin >> s;
	int k = s.length();
	bool result = true;
	for (int i = 0; i<k/2; i++)
	{
		if (s[i] != s[k - 1 - i])
		{
			result = false;
			break;
		}
    }
	if (result == true)
	{
		cout << " it's a palindrome";
	}
	else cout << "that's not a palindrome";
}

