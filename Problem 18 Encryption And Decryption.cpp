#include <iostream>

using namespace std;
string ReadWord()
{
    string Word = "";
    cout << "Enter Word : " << endl;
    getline(cin, Word);

    return Word;
}

string EncryptionWord(string Word, short EncryptionKey)
{

    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = char((int)Word[i] + EncryptionKey);
    }
    return Word;
}
string DecryptionWord(string Word, short DncryptionKey)
{

    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = char((int)Word[i] - DncryptionKey);
    }
    return Word;
}

int main()
{
    const short EncryptionKey = 2;
    string Word = ReadWord();
    string Encrypword = EncryptionWord(Word, EncryptionKey);
    cout << "Word Before Encryption : " << Word << endl;
    cout << "Encryption Word : " << Encrypword << endl;
    cout << "Decryption Word : " << DecryptionWord(Encrypword, EncryptionKey) << endl;
    ;

    return 0;
}