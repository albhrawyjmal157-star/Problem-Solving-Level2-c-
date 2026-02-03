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
    for (int j = 65 + Number - 1; j >= 65; j--)
    {
        for (int i = j - 64; i > 0; i--)
        {
            cout << char(j);
        }
        cout << endl;
    }
}

int main()
{

    PrintPatternNumber(ReadNumber("Enter Number : "));
    return 0;
}