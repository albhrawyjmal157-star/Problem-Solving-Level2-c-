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

float MySqrt(int Number)
{
    return pow(Number, 0.5);
}

void PrintResilt(float SqrtNumber)
{
    cout << "My Sqrt : " << SqrtNumber << endl;
}
int main()
{
    float Number = ReadNumber("Enter Number : ");
    PrintResilt(MySqrt(Number));
    cout << sqrt(Number);
}
