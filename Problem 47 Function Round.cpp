#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string message)
{
    float Number = 0;

    cout << message << endl;
    cin >> Number;
    return Number;
}

int MyRoundFunction(float Number)
{
    if (Number == (int)Number)
    {
        return Number;
    }

    float Fractional = Number - int(Number);
    if (Number > 0)
        if (Fractional >= 0.5)
        {
            return (int)Number + 1;
        }
        else

        {
            return (int)Number;
        }
    else
    {
        if (Fractional > -0.5)
        {
            return (int)Number;
        }
        else

        {
            return (int)Number - 1;
        }
    }
}

void PrintResult(float Number)
{
    cout << "My Round Function : " << Number << endl;
}

int main()
{
    float Number = ReadNumber("Enter Number : ");
    PrintResult(MyRoundFunction(Number));
    cout << "Function : " << round(Number) << endl;
}