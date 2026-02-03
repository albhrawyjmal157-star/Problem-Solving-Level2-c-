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

void CopyReverseArray(int Numbers[100], int ReverseArray[100], int Length)
{

    for (int i = 0; i < Length; i++)
    {
        ReverseArray[i] = Numbers[Length - i - 1];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Numbers[100] = {}, ReverseNumbers[100] = {}, Counter = 0;
    int Length = ReadNumber("Enter Length Of Array : ");
    ReadElmentOfArray(Numbers, Length);
    cout << " \n\nElements  Array : \n";
    PrintElmentOfArray(Numbers, Length);
    CopyReverseArray(Numbers, ReverseNumbers, Length);
    cout << " \n\nElements  Reverse Array : \n";
    PrintElmentOfArray(ReverseNumbers, Length);

    return 0;
}