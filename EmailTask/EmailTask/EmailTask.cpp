#include <iostream>
#include <string>

using namespace std;

int Find(string s, int startpos, int endpos, char key)
{
    int k = -1;
    for (int i = startpos; i <= endpos; i++)
    {
        if (s[i] == key)
        {
            k = i;
            break;
        }
    }
    return k;
}

int main()
{
    string email="email@org.ua";
    cout << "Enter an email: ";
    //cin >> email;
    string leftPart, rightPart;
    char key='@';
    int startpos = 0, endpos = email.size()-1;
    int k1 = Find(email, startpos, endpos, key);
    int k2 = Find(email, k1 + 1, endpos, key);
    if (k2 > 0)
    {
        cout << "Incorrect email!";
    }
    else
    {
        for (int i = startpos; i < k1; i++)
        {
            leftPart = leftPart + email[i];
        }
        for (int i = k1 + 1; i <= endpos; i++)
        {
            rightPart = rightPart + email[i];
        }
        cout << "First Part: " << rightPart << endl << "Second Part: " << leftPart << endl;
        string a[3] = { "net", "org", "com"};
        string p1, p2;
        int k3 = Find(rightPart, 0, rightPart.size() - 1, '.');
        for (int i = 0; i < k3; i++)
        {
            p1 = p1 + rightPart[i];
        }
        for (int i = k3+1; i <= rightPart.size()-1; i++)
        {
            p2 = p2 + rightPart[i];
        }
        cout << "p1: " << p1 << endl << "p2: " << p2 << endl;
        int l1 = p2.find(a[0]), l2 = p2.find(a[1]), l3 = p2.find(a[2]);
        cout << "l1: " << l1 << endl << "l2: " << l2 << endl << "l3: " << l3 << endl;
        if (l1 > 0 || l2 > 0 || l3 > 0)
        {
            cout << "It's an email!";
        }
        else cout << "Not an email!";
    }
   









    //int pos = email.find("@");
}

