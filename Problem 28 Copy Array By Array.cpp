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

void CopyArray(int Numbers[100], int Numbers1[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Numbers1[i] = Numbers[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Numbers[100] = {}, Numbers1[100] = {};
    int Length = ReadNumber("Enter Length Of Array : ");
    ReadElmentOfArray(Numbers, Length);
    cout << " \n\nElements Original Array : \n";
    PrintElmentOfArray(Numbers, Length);
    CopyArray(Numbers, Numbers1, Length);
    cout << " \n\nElements Copy  Array : \n";
    PrintElmentOfArray(Numbers1, Length);

    return 0;
}