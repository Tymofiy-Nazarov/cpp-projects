#include <sstream> //строковые стримы: stringstream, istringstream, ostringstream
#include <string> //стандартные строки
#include <iostream> //cout,cin
#include <vector> //массив стандартной библиотеки

using namespace std;

vector<string> split(const string& s,const char delimeter)
{
	vector<string> result;
	stringstream ss(s);
	string item;
	while (getline(ss, item, delimeter))
	{
		result.push_back(item);
	}


	return result;
}
int main()
{
	string data="42 3.14 Hello"; //тестовый ввод для трех переменных
	int a;
	double b;
	string c;
	istringstream iss(data);
	iss >> a >> b >> c;
	cout << a << endl << b << endl << c << endl;
	string data2 = "Hello world from C++";
	istringstream iss2(data2);
	string word;
	vector<string> words;
	int k = 0;
	while (iss2 >> word)
	{
		words.push_back(word);
		k++;
	}
	for (int i = 0; i < words.size(); i++)
	{
		cout << words[i] << endl;
	}
	string data3 = "Age 25 Height 180";
	istringstream iss3(data3);
	string token;
	vector<int> numbers;
	while (iss3 >> token)
	{
		try
    {
			size_t pos = 0;
			int value = stoi(token, &pos);
			if (pos == token.size())
			{
				numbers.push_back(value);
			}
	}
		catch (...)	{}
	}
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
	int day = 11, month = 3, year = 2026;
	ostringstream oss;
	oss << day <<"." << month <<"." << year; //дз при помощи манипуляторов сделать 11.03.2026;
	string date = oss.str();
	cout << date<<endl;
	//email
	string email = "email@gmail.com";//дз 1)когда не ввели разделитель(@),когда несколько разделителей(one,,three,,four)
	vector<string> parts=split(email, '@');
	for (int i = 0; i < parts.size(); i++)
	{
		cout << parts[i] << endl;
	}

}

