#include <iostream>
using namespace std;

int ReadNumber(string massage)
{
    int Number = 0;
    do
    {
        cout << massage << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

bool IsPrime(int Number)
{
    int num = Number / 2;
    if (Number == 1)
    {
        return false;
    }
    for (int i = 2; i <= num; i++)
    {
        if (Number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void PrintAllPrimeNumber(int Number)
{
    cout << "Prime Numbers : \n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPrime(i))
        {
            cout << " " << i;
        }
    }
}

int main()
{
    PrintAllPrimeNumber(ReadNumber("Enter Number : "));
    return 0;
}