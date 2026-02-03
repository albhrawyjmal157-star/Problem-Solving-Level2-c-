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

void CopyArrayOddElement(int Numbers[100], int CopyArrayNumbers[100], int Length, int &Counter)
{
    for (int i = 0; i < Length; i++)
    {
        if (Numbers[i] % 2 != 0)
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
    CopyArrayOddElement(Numbers, CopyArrayNumbers, Length, Counter);
    cout << "\nCopy Arrat Odd  By Add Element  Array : " << endl;
    PrintElmentOfArray(CopyArrayNumbers, Counter);
}