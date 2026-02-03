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

int MyFloorFunction(float Number)
{
    if (Number == (int)Number)
    {
        return Number;
    }

    else if (Number > 0)
    {
        return (int)Number;
    }
    else
    {
        return (int)Number - 1;
    }
}

void PrintResult(int Number)
{
    cout << "My Floor Function : " << Number << endl;
}

int main()
{
    float Number = ReadNumber("Enter Number : ");
    PrintResult(MyFloorFunction(Number));
    cout << "Function : " << floor(Number) << endl;
}