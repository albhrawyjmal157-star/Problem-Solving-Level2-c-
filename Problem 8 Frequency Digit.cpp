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

void PrintFrequencyDigit(int Number, int Digit)
{

    cout << Digit << " Is Frequency : " << CountDigitInNumber(Number, Digit) << " Times" << endl;
}

int main()
{

    int Number = ReadNumber("Enter Number : ");
    int Digit = ReadNumber("Enter Digit : ");
    PrintFrequencyDigit(Number, Digit);

    return 0;
}