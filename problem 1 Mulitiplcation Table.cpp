#include <iostream>

using namespace std;
void PrintExternalShap()
{
    cout << "\n\n\t\t\tMulitplication Table From 1 To 10\n " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << "\n-------------------------------------------------------------------------------------------------------------\n";
}

string ParallelSpace(int Number)
{
    if (Number < 10)
    {
        return "   |";
    }
    else
    {
        return "  |";
    }
}
void TotalShap()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ParallelSpace(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
}
int main()
{
    PrintExternalShap();
    TotalShap();
    return 0;
}