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

char ReturnChar()
{
    return char(RandomNumber(65, 90));
}

string ReturnWord()
{
    string Word = "";
    for (int i = 0; i < 5; i++)
    {
        Word += ReturnChar();
    }
    return Word;
}

string ReturnKey()
{
    string Key = "";
    Key = Key + ReturnWord() + "-";
    Key = Key + ReturnWord() + "-";
    Key = Key + ReturnWord() + "-";
    Key = Key + ReturnWord();
    return Key;
}

void GenerateKeysInArray(string Numbers[100], int Number)
{
    for (int i = 0; i < Number; i++)
    {
        Numbers[i] = ReturnKey();
    }
}

void PrintElmentOfArray(string Numbers[100], int Number)
{
    cout << " \n\nElements Array : \n";
    for (int i = 0; i < Number; i++)
    {
        cout << "Array[ " << i << "] : " << Numbers[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Number = ReadNumber("Enter Number Of Keys : ");
    string Numbers[100];
    GenerateKeysInArray(Numbers, Number);
    PrintElmentOfArray(Numbers, Number);
    return 0;
}