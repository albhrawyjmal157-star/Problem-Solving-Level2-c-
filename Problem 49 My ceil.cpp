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

int MyCeilFunction(float Number)
{
    if (Number == (int)Number)
    {
        return (int)Number;
    }
    else if (Number > 0)
    {
        return (int)Number + 1;
    }
    else
    {
        return (int)Number;
    }
}

void PrintResult(int Number)
{
    cout << "My Ceil Function : " << Number << endl;
}

int main()
{
    float Number = ReadNumber("Enter Number : ");
    PrintResult(MyCeilFunction(Number));
    cout << "Function : " << ceil(Number) << endl;
}