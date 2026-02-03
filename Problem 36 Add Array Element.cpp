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

void PrintElmentOfArray(int Numbers[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << " " << Numbers[i];
    }
}
void AddArrayElement(int Numbers[100], int &Counter)
{
    while (true)
    {
        int Number = ReadNumber("Please Enter Number : ");
        Numbers[Counter] = Number;
        Counter++;
        bool Check = ReadNumber("Do You Want Add more Numbers No[0],Yes[1] : ");

        if (!Check)
        {
            cout << "Array Length : " << endl;
            cout << Counter + 1 << endl;
            cout << "Array Elements : " << endl;
            for (int i = 0; i <= Counter; i++)
            {
                cout << " " << Numbers[i];
            }
            break;
        }
    }
}

int main()
{
    int Counter = 0, Numbers[100] = {};
    AddArrayElement(Numbers, Counter);
}