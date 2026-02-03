#include <iostream>

#include <cstdlib>
using namespace std;
// 33 to 47 => symobls
// 48 to 57 => numbers [0,9]
// 65 to 90 => capital letters
// 97 to 122 => small letters
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpcialCharacter = 3,
    Digit = 4
};

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char RandChar(enCharType CharType)
{
    switch (CharType)
    {
    case (enCharType::CapitalLetter):
        return char(RandomNumber(65, 90));
        break;
    case (enCharType::Digit):
        return char(RandomNumber(48, 57));
        break;
    case (enCharType::SmallLetter):
        return char(RandomNumber(97, 122));
        break;
    case (enCharType::SpcialCharacter):
        return char(RandomNumber(33, 47));
        break;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    cout << RandChar(enCharType::CapitalLetter) << endl;
    cout << RandChar(enCharType::Digit) << endl;
    cout << RandChar(enCharType::SmallLetter) << endl;
    cout << RandChar(enCharType::SpcialCharacter) << endl;

    return 0;
}