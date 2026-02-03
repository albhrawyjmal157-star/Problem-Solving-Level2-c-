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

void PrintPatternNumber(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{

    PrintPatternNumber(ReadNumber("Enter Number : "));
    return 0;
}