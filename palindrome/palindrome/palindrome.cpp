#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cout << "Enter palindrome: ";
	string input_s;
	cin >> input_s;
	for (int i = 0; i < input_s.size(); i++)
	{
		if (input_s[i] == ' ')
		{
			input_s.erase(i, 1);
			i--;
	    }
		input_s[i] = tolower(input_s[i]);
	}
	string s = input_s;
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


