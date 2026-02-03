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

void PrintReverseDigit(int Number)
{
    int Sum = 0;
    while (Number > 0)
    {
        int Remainder = Number % 10;
        Number /= 10;
        Sum += Remainder;
    }
    cout << "Sum Of Digits : " << Sum << endl;
}

int main()
{
    PrintReverseDigit(ReadNumber("Enter Number : "));
}