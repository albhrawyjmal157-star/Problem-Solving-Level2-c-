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
    while (Number > 0)
    {
        int Remainder = Number % 10;
        Number /= 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintReverseDigit(ReadNumber("Enter Number : "));
}