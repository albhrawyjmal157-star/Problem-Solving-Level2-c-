
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
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}
void ReadElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Numbers[i] = RandomNumber(1, 100);
    }
}

void CopyArrayPrimeElement(int Numbers[100], int CopyArrayNumbers[100], int Length, int &Counter)
{
    for (int i = 0; i < Length; i++)
    {
        if (IsPrime(Numbers[i]))
        {
            CopyArrayNumbers[Counter] = Numbers[i];
            Counter++;
        }
    }
}
void PrintElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << " " << Numbers[i];
    }
}
int main()
{
    int Counter = 0, Numbers[100] = {}, CopyArrayNumbers[100] = {};
    int Length = ReadNumber("Enter Length Of Array  : ");
    ReadElmentOfArray(Numbers, Length);
    cout << "Orignal Array : " << endl;
    PrintElmentOfArray(Numbers, Length);
    CopyArrayPrimeElement(Numbers, CopyArrayNumbers, Length, Counter);
    cout << "\nCopy Arrat Prime  By Add Element  Array : " << endl;
    PrintElmentOfArray(CopyArrayNumbers, Counter);
}
