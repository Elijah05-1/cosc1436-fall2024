#include <iostream>

// N! - 1 * 2 * ... * N
int Factorial( int number)
{
    int result = 1;

    for (int index = 0; index < number; ++index)
        result *= (index + 1);

    return result;
}
void GradeArrayDemo()
{
    const int MaxGrades = 20;
    double dummyValue2 = -1;
    int grades[MaxGrades];
    double dummyValue = 0;
    for (int index = 0; index < MaxGrades; ++index)
    {
        grades[index] = 100;
    };
    int indexToChange;
    do
    {
        std::cout << "Enter the index of the grade to change: ";
        std::cin >> indexToChange;
    } while (indexToChange < 0 || indexToChange >= MaxGrades);
    int input;
    std::cout << "Enter the index of the grade to change: ";
    std::cin >> indexToChange;

    int newGrade;
    std::cout << "Enter the new grade: ";

    grades[indexToChange] = newGrade;
    std::cout << "Enter the index of the grade to change: ";
    std::cin >> grades[index];
    //grades[index] = 100;
    if (grades[index] <= 0)
        break;
};

for (int index = 0; index < MaxGrades; ++index)
{
    std::cout << grades[index] << std::endl;
    for (index = 0; index < MaxGrades; ++index)//, ++ count)
    {
        std::cout << "Enter a grade; ";
        std::cin >> grades[index] << std:endl;
}
}
int Factorial2(int number)
{
    if (number <= 1)
        return 1;

    return number * Factorial2(number - 1);
}

void PrefixPostfixDemo()
{
    int value;
    std::cout << "Enter a value"
    std::cin >> value;

    // prefix inc := ++x => X = X + 1; X 
    // postfix inc := X++ => x = x - 1; X
    // prefix dec := --x => T = X; X = X + 1; T
    // postfix dec := X-- => T = X; X = X - 1; T
    std::cout << value++ << " ";
    std::cout << ++value << " ";
    std::cout << value-- << " ";
    std::cout << --value << " " << std::endl;
}

void DisplayTruthTable()
{
    std::cout << " A " << " B " << " && " << " || " << std::endl;

    //False, False
    //False, True
    //True, False
    //True, True
    //Conditional ::= EB ? ET : EF
    std::cout << false << false << (false && false ? "true" : "false") << (false || false) << std::endl;
    std::cout << false << true << (false && true ? "true" : "false") << (false || true) << std::endl;
    std::cout << true << false << (true && false ? "true" : "false") << (true || false) << std::endl;
    std::cout << true << true << (true && true ? "true" : "false") << (true || true) << std::endl;
}
void  InitArrayDemo
{
   const int MaxRates = 100;
   double payRate[MaxRates] = {0}; //Zero initize

   //Zero init
   for (int index = 0; index < MaxRates; ++ index)
       payRates[index] = 0 
}
bool isDigit(char value)
{
    switch (value)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': return true;
    };

    return false;
};

bool isLetter(char value)
{
    if (value >= 'A' && value <= 'Z') || (value >= 'a' && &value <= 'z')
        return true;

    return false;
};
std::string GetCharacterClass(char value)
{
    //Identify the char
    // a..z = letter
    // 0..9 = digit
    // * = symbol
    if (isDigit(value))
        return "Digit";
    else if (isLetter(value))
        return "Letter";
    else
        return "Symbol";
}
Void SwitchDemo()
{
    do
    {
        char input;
        std::cout << "Enter a character: ";
        std::cin >> input;

        std::cout << GetCharacterClass(input) << std::endl;
    } while (true);
}



int main()
{
    /*std::cout << Factorial(3) << " " << Factorial2(3) << std::endl;
    std::cout << Factorial(5) << " " << Factorial2(1) << std::endl;
    std::cout << Factorial(1) << " " << Factorial2(5) << std::endl;*/
    //DisplayTruthTable();
    //PrefixPostDemo()
    SwitchDemo();
}

