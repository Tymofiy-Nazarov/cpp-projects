#include <iostream>

using namespace std;
 
class solution 
{
public:
    double x1;
    double x2;
};
double calculateDiscriminant(double a, double b, double c)
{
    if (a == 0) 
    {
        throw std::invalid_argument("Cannot be 0");
    }
    return b * b - 4 * a * c;
}
bool calculateX1X2(const double a, const double b, const double c, double& x1, double& x2)
{
    bool result = true;
    double D;
    try 
    {
        D = calculateDiscriminant(a, b, c);
        if (D < 0)
        {
            result = false;
        }
        else
        {
            x1 = (-b + sqrt(D)) / 2;
            x2 = (-b - sqrt(D)) / 2;
            result = true;
        }
    }
    catch(const std::invalid_argument& ex)
    {
        cout << "error:" << ex.what() << endl;
        result= false;
    }
    return result;
}
solution calcX1X2(const double a, const double b, const double c)
{
    solution result;
    try
    {
        double D = calculateDiscriminant(a, b, c);
        if (D < 0)
        {
        }
        else
        {
            double x1 = (-b + sqrt(D)) / 2;
            double x2 = (-b - sqrt(D)) / 2;
            result.x1 = x1;
            result.x2 = x2;
        }
    }
    catch (const std::invalid_argument& ex)
    {
        cout << "error:" << ex.what() << endl;
    }
    return result;
}
int main()
{
    double a, b, c,x1,x2;
    cout << "Insert a,b,c: ";
    cin >> a >> b >> c;
    solution Result = calcX1X2(a, b, c);
        cout << "Result: " << Result.x1 <<" " << Result.x2 << endl;
    /*bool Result = calculateX1X2(a, b, c, x1, x2);

    if (Result == true)
    {
        cout << "x1:" << x1 << endl<<"x2:" << x2;
    }
    else
    {
        cout << "The real x1 and x2 are absent";
    }*/

    //ax^2+bx+c=0 (x-3)*(x+2)->(x^2+2x-3x-6)->x^2-x-6


   /* try
    {
        double D = calculateDiscriminant(a, b, c);
        cout << "Discriminant: " << D << endl;
    }
    catch (const std::invalid_argument& ex)
    {
        cout << "error:" << ex.what() << endl;
    }
    catch (...)
    {
        cout << "Unexpected error" << endl;
    } */
    return 0;
}