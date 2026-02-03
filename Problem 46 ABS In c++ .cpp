#include <iostream>

using namespace std;

float ReadNumber(string message)
{
    float Number = 0;

    cout << message << endl;
    cin >> Number;
    return Number;
}

int ReturnAbs(int Number)
{
    if (Number >= 0)
    {
        return Number;
    }
    else
    {
        return Number * -1;
    }
}

void PrintResult(int Number)
{
    cout << "My abs Result : " << Number << endl;
    cout << "c++ abs Result : " << abs(Number) << endl;
}

int main()
{
    PrintResult(ReturnAbs(ReadNumber("Enter Number : ")));
}