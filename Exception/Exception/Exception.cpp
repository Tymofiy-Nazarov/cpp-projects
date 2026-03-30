#include <iostream>


using namespace std;

int Divide(int a, int b)
{
    if (b == 0)
    {
        throw std::invalid_argument("division by zero");
    }
    return a / b;
}

int main()
{
    cout << "Enter a and b: ";
    int a = 0, b = 0;
    cin >> a >> b;
    int y = 0;
    try 
    {
       // y = a / b;
        y = Divide(a, b);
    }
    catch(const std::invalid_argument& ex)
    {
        cout << "error:" << ex.what() << endl;
    }
    catch(...)
    {
        cout << "Can't divide by zero!"<<endl;
    }
    cout << y;

}
