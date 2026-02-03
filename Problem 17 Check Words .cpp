#include <iostream>

using namespace std;

string ReadWord()
{
    string word = "";
    do
    {
        cout << "Enter Word 3 Letters : " << endl;
        cin >> word;
    } while (word.length() != 3);
    return word;
}
void PrintResult(string word)
{
    bool Found = false;
    string Word = "";
    int Counter = 0;
    for (int i = 65; i <= 90 && !Found; i++)
    {
        for (int j = 65; j <= 90 && !Found; j++)
        {
            for (int h = 65; h <= 90; h++)
            {
                Counter++;
                Word += char(i);
                Word += char(j);
                Word += char(h);
                if (Word == word)
                {
                    Found = true;
                    cout << "Password Is : " << word << endl;
                    cout << "Found After " << Counter << " Trials" << endl;
                    break;
                }
                cout << " Trial [" << Counter << "]" << Word << endl;

                Word = "";
            }
        }
    }
}

int main()
{
    string word = ReadWord();
    PrintResult(word);
    return 0;
}