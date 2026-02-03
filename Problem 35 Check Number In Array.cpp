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

bool SearchOnNumber(int Numbers[100], int Length, int Num)
{
    for (int i = 0; i < Length; i++)
    {
        if (Num == Numbers[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    srand((unsigned)time(NULL));
    int Numbers[100] = {};
    int Length = ReadNumber("Enter Length Of Array : ");
    ReadElmentOfArray(Numbers, Length);
    cout << " \n\nElements  Array : \n";
    PrintElmentOfArray(Numbers, Length);
    int Number1 = ReadNumber("\nPlease Enter Number To Search For : ");
    short num = SearchOnNumber(Numbers, Length, Number1);
    if (!num)
    {
        cout << "No ,The Number Is Not Found :-( " << endl;
    }
    else
    {
        cout << "Yes ,The Number Is Not Found :-( " << endl;
    }

    return 0;
}