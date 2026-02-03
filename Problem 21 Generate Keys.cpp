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

int main()
{
    srand((unsigned)time(NULL));
    int Number = ReadNumber("Enter Number : ");
    for (int i = 1; i <= Number; i++)
    {
        cout << "Key [" << i << "]" << ReturnKey() << endl;
    }
    return 0;
}