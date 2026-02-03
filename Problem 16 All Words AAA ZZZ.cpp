#include <iostream>

using namespace std;

void PrintResult()
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int h = 65; h <= 90; h++)
            {
                cout << char(i) << char(j) << char(h) << endl;
            }
        }
    }
}

int main()
{
    PrintResult();
    return 0;
}