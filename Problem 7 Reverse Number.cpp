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

int ReturnReverseNumber(int Number)
{
    int Number1 = 0;
    while (Number > 0)
    {
        int Remainder = Number % 10;
        Number /= 10;
        Number1 = Number1 * 10 + Remainder;
    }
    return Number1;
}
void PrintReverseNumber(int Number)
{
    cout << "Reverse Number : " << Number << endl;
}

int main()
{
    PrintReverseNumber(ReturnReverseNumber(ReadNumber("Enter Number : ")));

    return 0;
}