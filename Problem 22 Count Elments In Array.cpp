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

void ReadElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "Enter Number  " << i + 1 << " : ";
        cin >> Numbers[i];
    }
}

int CountElmentOfArray(int Numbers[100], int Length, int Digit)
{
    int Counter = 0;
    for (int i = 0; i < Length; i++)
    {
        if (Digit == Numbers[i])
        {
            Counter++;
        }
    }
    return Counter;
}

int main()
{
    int Numbers[100] = {};
    int Length = ReadNumber("Enter Length Of Array : ");
    ReadElmentOfArray(Numbers, Length);
    int Digit = ReadNumber("Enter Digit You Want Search For : ");
    int Count = CountElmentOfArray(Numbers, Length, Digit);
    cout << Digit << " Is Repated " << Count << " Times " << endl;

    return 0;
}