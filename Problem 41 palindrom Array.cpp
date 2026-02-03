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

void ReadElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        Numbers[i] = ReadNumber("Enter Number : ");
    }
}

void PrintElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << " " << Numbers[i];
    }
}

bool IsPalindromArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length / 2; i++)
    {
        if (Numbers[i] != Numbers[Length - i - 1])
        {
            return false;
        }
    }
    return true;
}

void PrintResult(bool IsPalindromArray)
{
    if (IsPalindromArray)
    {
        cout << "\nPalindrom Array " << endl;
    }
    else
    {
        cout << "\nNot Palindrom Array " << endl;
    }
}

int main()
{
    int Length = ReadNumber("Enter Length Of Array : ");
    int Numbers[100] = {};
    ReadElmentOfArray(Numbers, Length);
    cout << "Elements Array " << endl;
    PrintElmentOfArray(Numbers, Length);
    bool check = IsPalindromArray(Numbers, Length);
    PrintResult(check);
}