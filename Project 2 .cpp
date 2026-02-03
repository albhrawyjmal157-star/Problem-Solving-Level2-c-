#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

enum enQuestionLevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    MaxLevel = 4
};

enum enOperationType
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Div = 4,
    MaxType = 5
};

enQuestionLevel ReturnEnumOfLevel(short num)
{
    return (enQuestionLevel)num;
}

enOperationType ReturnEnumOfOperation(short num)
{
    return (enOperationType)num;
}

struct StMath
{
    int NumOfQuestion;
    enQuestionLevel QuestionLevel;
    enOperationType OperationType;
    int NumberOne;
    int NumberTwo;
    int RightAnswer;
    int WrongAnswer;
};

void ReSetScreen()
{
    system("color 0F");
    system("cls");
}
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

int ReadHowManyQuestion()
{
    int Number = 0;
    do
    {
        cout << "How Many Questions Do You Want To Answer ? ";
        cin >> Number;
    } while (Number > 10 || Number < 1);

    return Number;
}

int ReadQuestionLevel()
{
    int Number = 0;
    do
    {
        cout << "Enter Question Level [1] Easy, [2] Med, [3] Hard, [4] Max ? ";
        cin >> Number;
    } while (Number > 4 || Number < 1);
    return Number;
}

int ReadOperationType()
{
    int Number = 0;
    do
    {
        cout << "Enter Operation Type [1] Add,[2] Sub,[3] Mul,[4] Div,[5] Max ? ";
        cin >> Number;
    } while (Number > 5 || Number < 1);
    return Number;
}
void ReturnTwoNumber(StMath &QuestionMath)
{
    switch (QuestionMath.QuestionLevel)
    {
    case enQuestionLevel::Easy:
        QuestionMath.NumberOne = RandomNumber(1, 10);
        QuestionMath.NumberTwo = RandomNumber(1, 10);
        break;

    case enQuestionLevel::Med:
        QuestionMath.NumberOne = RandomNumber(10, 50);
        QuestionMath.NumberTwo = RandomNumber(10, 50);
        break;

    case enQuestionLevel::Hard:
        QuestionMath.NumberOne = RandomNumber(50, 100);
        QuestionMath.NumberTwo = RandomNumber(50, 100);
        break;

    case enQuestionLevel::MaxLevel:
        QuestionMath.NumberOne = RandomNumber(1, 100);
        QuestionMath.NumberTwo = RandomNumber(1, 100);
        break;
    }
}

int ReturnOperate(StMath &QuestionMath)
{
    switch (QuestionMath.OperationType)
    {
    case enOperationType::Add:
        return QuestionMath.NumberOne + QuestionMath.NumberTwo;

    case enOperationType::Sub:
        return QuestionMath.NumberOne - QuestionMath.NumberTwo;

    case enOperationType::Div:
        return QuestionMath.NumberOne / QuestionMath.NumberTwo;

    case enOperationType::Mul:
        return QuestionMath.NumberOne * QuestionMath.NumberTwo;

    default:
        return -1;
    }
}

string ReturnSignOperate(StMath &QuestionMath)
{
    switch (QuestionMath.OperationType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Div:
        return "/";
    case enOperationType::Mul:
        return "*";
    case enOperationType::Sub:
        return "-";
    default:
        return " ";
    }
}

void CheckAnswer(int UserNumber, int RightAnswer, StMath &QuestionMath)
{
    if (UserNumber == RightAnswer)
    {
        system("color 2F");
        QuestionMath.RightAnswer++;
        cout << "Right Answer :-)\n\n";
    }
    else
    {
        Beep(800, 200);
        system("color 4F");
        QuestionMath.WrongAnswer++;
        cout << "Wrong Answer :-( \n The Right Answer : " << RightAnswer << "\n\n";
    }
}

string ReturnStringOfQuestionLevel(StMath QuestionMath)
{
    switch (QuestionMath.QuestionLevel)
    {
    case enQuestionLevel::Easy:
        return "Easy";
    case enQuestionLevel::Hard:
        return "Hard";
    case enQuestionLevel::MaxLevel:
        return "MaxLevel";
    case enQuestionLevel::Med:
        return "Med";
    default:
        return " ";
    }
}
string ReturnStringOfOperationType(StMath QuestionMath)
{
    switch (QuestionMath.OperationType)
    {
    case enOperationType::Add:
        return " Add ";
    case enOperationType::Div:
        return " Div ";
    case enOperationType::MaxType:
        return " MaxType ";
    case enOperationType::Mul:
        return " Mul ";
    case enOperationType::Sub:
        return " Sub ";
    default:
        return " ";
    }
}

void ReturnPassOrFail(StMath QuestionMath)
{
    cout << "---------------------------------------" << endl;
    cout << "( \tFinal Result Is ";
    if (QuestionMath.RightAnswer > QuestionMath.WrongAnswer)
    {
        system("color 2F");
        cout << " Pass :-)";
    }
    else
    {
        system("color 4F");
        cout << " Fail :-(";
    }
    cout << "---------------------------------------" << endl;
}
void PrintFinalResult(StMath QuestionMath)
{
    ReSetScreen();
    ReturnPassOrFail(QuestionMath);
    cout << "\n Number Of Question : " << QuestionMath.NumOfQuestion << endl;
    cout << "\nQuestion Level          : " << ReturnStringOfQuestionLevel(QuestionMath);
    cout << "\nOpType                  :  " << ReturnStringOfOperationType(QuestionMath);
    cout << "\nNumber Of Right Answers : " << QuestionMath.RightAnswer << endl;
    cout << "\nNumber Of Wrong Answers : " << QuestionMath.WrongAnswer << endl;
    cout << "---------------------------------------" << endl;
}
void ShowQuestion()
{
    int Number = 0;
    StMath QuestionMath;
    QuestionMath.RightAnswer = 0;
    QuestionMath.WrongAnswer = 0;
    QuestionMath.NumOfQuestion = ReadHowManyQuestion();
    QuestionMath.QuestionLevel = ReturnEnumOfLevel(ReadQuestionLevel());
    enOperationType UserOperation = ReturnEnumOfOperation(ReadOperationType());

    for (short i = 1; i <= QuestionMath.NumOfQuestion; i++)
    {
        QuestionMath.NumberOne = 0;
        QuestionMath.NumberTwo = 0;
        enOperationType CurrentOperation;

        ReturnTwoNumber(QuestionMath);

        if (UserOperation == enOperationType::MaxType)
            CurrentOperation = ReturnEnumOfOperation(RandomNumber(1, 4));
        else
            CurrentOperation = UserOperation;

        QuestionMath.OperationType = CurrentOperation;

        cout << "\n Question [" << i << "/" << QuestionMath.NumOfQuestion << "]" << endl;
        cout << QuestionMath.NumberOne << endl;
        cout << ReturnSignOperate(QuestionMath) << endl;
        cout << QuestionMath.NumberTwo << endl;
        cout << "-------------------------" << endl;

        cin >> Number;
        CheckAnswer(Number, ReturnOperate(QuestionMath), QuestionMath);
    }
    PrintFinalResult(QuestionMath);
}

void StartGame()
{
    char choice;
    do
    {
        ShowQuestion();
        cout << "Do You Want To Play Again ? Y/N ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank You ! ";
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
