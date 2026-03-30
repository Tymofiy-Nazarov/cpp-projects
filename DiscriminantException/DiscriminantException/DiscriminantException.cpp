#include <iostream>

using namespace std;
 
int calculateDiscriminant(int a, int b, int c)
{
    if (a == 0) 
    {
        throw std::invalid_argument("Cannot be 0");
    }
    return b * b - 4 * a * c;
}
int main()
{
    int a, b, c;
    cout << "Insert a,b,c: ";
    cin >> a >> b >> c;
    try
    {
        int D = calculateDiscriminant(a, b, c);
        cout << "Discriminant: " << D << endl;
    }
    catch (const std::invalid_argument& ex)
    {
        cout << "error:" << ex.what() << endl;
    }
    catch (...)
    {
        cout << "Unexpected error" << endl;
    }
    return 0;
}