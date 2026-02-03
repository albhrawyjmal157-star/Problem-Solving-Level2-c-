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
enum enIsPerfect
{
    Perfect = 1,
    NotPerfect = 2
};

enIsPerfect IsPerfect(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }
    if (Sum == Number)
    {
        return enIsPerfect::Perfect;
    }
    return enIsPerfect::NotPerfect;
}

void PrintResult(int Number)
{
    cout << "Perfect Numbers From 1 to : " << Number << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfect(i) == enIsPerfect::Perfect)
        {
            cout << " " << i;
        }
    }
}

int main()
{
    PrintResult(ReadNumber("Enter Number : "));

    return 0;
}