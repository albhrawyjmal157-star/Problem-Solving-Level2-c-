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
    cout << " \n\nElements Array : \n";
    for (int i = 0; i < Length; i++)
    {
        cout << " " << Numbers[i];
    }
}
int SumInArray(int Numbers[100], int Length)
{
    int SumNumbers = 0;
    for (int i = 0; i < Length; i++)
    {
        SumNumbers += Numbers[i];
    }
    return SumNumbers;
}

float CalCulateAverage(int Numbers[100], int Length)
{
    return (float)SumInArray(Numbers, Length) / Length;
}
int main()
{
    srand((unsigned)time(NULL));
    int Length = ReadNumber("Enter Length Of Array : ");
    int Numbers[100] = {};
    ReadElmentOfArray(Numbers, Length);
    PrintElmentOfArray(Numbers, Length);
    cout << "\nAverage Of Random Number : " << CalCulateAverage(Numbers, Length);

    return 0;
}