#include <iostream>
using namespace std;

int ReadNumber(string message)
{
    int Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int CountDigitInNumber(int Number, int Digit)
{
    int Counter = 0;
    while (Number > 0)
    {

        int Remainder = Number % 10;
        Number /= 10;
        if (Remainder == Digit)
        {
            Counter++;
        }
    }
    return Counter;
}

void PrintFrequencyDigit(int Number)
{
    for (int i = 0; i <= 9; i++)
    {
        int Num = CountDigitInNumber(Number, i);
        if (Num > 0)
        {
            cout << i << " Is Frequency : " << Num << " Times" << endl;
        }
    }
}

int main()
{

    int Number = ReadNumber("Enter Number : ");
    PrintFrequencyDigit(Number);

    return 0;
}