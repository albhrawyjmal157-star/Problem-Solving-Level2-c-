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

int CountOddElement(int Numbers[100], int Length)
{
    int Count = 0;
    for (int i = 0; i < Length; i++)
    {
        if (Numbers[i] % 2 != 0)
        {
            Count++;
        }
    }
    return Count;
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
    srand((unsigned)time(NULL));
    int Numbers[100] = {};
    int Length = ReadNumber("Enter Length Of Array  : ");
    ReadElmentOfArray(Numbers, Length);
    cout << "Orignal Array : " << endl;
    PrintElmentOfArray(Numbers, Length);
    int count = CountOddElement(Numbers, Length);
    cout << "\nCount Of Odd Number  : ";
    cout << count;
}