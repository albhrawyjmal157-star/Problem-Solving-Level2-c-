#include <iostream>
#include <cstdlib>

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
    int Num = Number / 2;
    if (Number == 1)
    {
        return false;
    }
    for (int i = 2; i <= Num; i++)
    {
        if (Number % i == 0)
            return false;
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

void PrintElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << " " << Numbers[i];
    }
}

void PrimeArray(int Numbers[100], int Numbers1[100], int Length, int &Counter)
{

    for (int i = 0; i < Length; i++)
    {
        if (IsPrime(Numbers[i]))
        {

            Numbers1[Counter] = Numbers[i];
            Counter++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Numbers[100] = {}, Numbers1[100] = {}, Counter = 0;
    int Length = ReadNumber("Enter Length Of Array : ");
    ReadElmentOfArray(Numbers, Length);
    cout << " \n\nElements  Array : \n";
    PrintElmentOfArray(Numbers, Length);
    PrimeArray(Numbers, Numbers1, Length, Counter);
    cout << " \n\nElements  Prime Array : \n";
    PrintElmentOfArray(Numbers1, Counter);

    return 0;
}