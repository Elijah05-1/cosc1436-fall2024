// Chapter33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath> //C math functions
#include <iomanip> // formatted output


//Include the std namespace so we don't have to prefixit  
using namespace std;
int main()
{
    ////Get user's name 
    //std::string name;
    //std::cout << "Enter your name: ";

    ////std:: cin >> V
    //// Insert value up to first whitespace into variable
    ////Doesn't work with spaced strings
    ////std::cin >> name;
    //std::getline(std::cin, name);

    //std::cout << "Hello " << name << std::endl; 

    //int hours;
    //std::cout << "How many hours did you work this week? ";
    //std::cin >> hours;

    //double payRate;
    //std::cout << "How much do you earn an hour?  ";
    //std::cin >> payRate;

    //std::cout << "You earned $" << (hours * payRate) << " this week" << std::endl;

    ////Multi-Value input, values are whitespace separated
    //int x, y;
    //std::cout << "Enter the X,Y Values of a point: ";
    //std::cin >> x >> y;

    ////Type coercion - Compiler changes type of expression
    ////No impact on runtime code generation
    ////Alway safe
    //// Only impacts current expression 
    //// Type hierarchy: Larger of two operand types
    //// double
    //// float
    //// unsigned long
    //// long 
    //// unsigned int
    //// int
    //// char/short/unsigned short (automatic to int)

    //// double = int * double
    //// double = double * double (type coercion)
    //// double = double 
    //double result = hours * payRate;

    ////Precedence rules don't apply, just find the largest type
    //// double + float * int => double

    ////Assignment doesn't matter, types determined on each side of operator
    ////double = int * float

    ////Overflow and underflow
    //short smallValue = 32767 + 1; //Overflow
    //std::cout << smallValue << std::endl;

    //short largeValue = -32768 - 1; //Underflow
    //std::cout << largeValue << std::endl;

    //float floatValue = 1e38 + 2e20;
    //std::cout << floatValue << std::endl;

    ////Typecasting - you convert an expression to another type explicitly
    //int totalSale = 50000;
    //int departments = 8;

    //// static_cast<T>(E)
    //// (T) => C-style, not recommended
    ////  Must be allowable 
    ////double averageSalesPerDepartment = static_cast<double>(totalSale) / departments;
    //double averageSalesPerDepartment = totalSale / static_cast<double>(departments);
    //averageSalePerDepartment = totalSale / (double)department;
    ////Compiler error, cannot convert from string to int
    //std::string someString = "Hello";
    ////int someStringNumber = static_cast<int>(someString);
    ////int someStringNumber = (int)somestring;

    ////Use cast to truncated data w/b compiler warning
    //int truncatedValue = static_cast<int>(floatValue)

    ////Math functions
    //// pow(x, y) => x to the y power
    //// sqrt(x) => square root of x
    //// exp(x) => e to the x power
    //// log(x) => log of x log(exp(x)) = x
    //// sin(x), cos(x), tan(x), sec(x), csc(x), ...h
    //// abs(x) => postive value of x
    //// ceil(x) => smallest possible int value >= x
    //// floor(x) => largest possible int value <= x
    //// trunc(x) => rounds towards zero
    //// round(x) => rounds to the nearest iteger (midpoint rounding) 
    //double xValue = 45.6;
    //double mathResult;

    //std::cout << pow(xValue, 2); << std::endl;//xValue * xValue
    //std::cout << sqrt(xValue); << std::endl;

    //std::cout << exp(2); << std::endl; // e nth power, e = 2.718
    //std::cout < log(5.4); << std::endl; // root of e

    //std::cout << abs(-45); << std::endl; // postive x = 45

    //std::cout << ceil(xValue); << std::endl;   // 46
    //std::cout << floor(xValue); << std::endl;  // 45

    //std::cout << trunc(xValue); << std::endl; // 45
    //std::cout << round(xValue); << std::endl; // 46

    ////Formatted output
    //std::cout << 4.567891241415151 << std::endl;
    //std::cout << 5.67e3 << std::endl;

    // Create a table
    // Manipulator | behavior | Persist
    // setw(i) | pads the value to i | No
    // left | Left justifies | Yes
    // right | Right justifies (default) | Yes
    // fixed | Forces fixed point notation | Yes 
    // setprecision(i) | Sets precision of float to total digits if !fixed and decimal digits if fixed | Yes
    // Setfill(c) | Character to pad with | Yes
    cout << left << setw(8) << "Student" << setw(6) << "Grade " << "Letter " << endl;
    cout << setw(20) << setfill('-') << "" <<  setfill(' ') << endl;
    cout << fixed << setprecision(2);
    cout << std::setw(8) << "Bob" << setw(6) << 95.67 << setw(6) << "A" << endl;
    cout << std::setw(8) << "Sue" << setw(6) << 98.543 << setw(6) << "A" << endl;
    cout << std::setw(8) << "Jim" << setw(6) << 84.567 << setw(6) << "B" << endl;
    cout << std::setw(8) << "Jan" << setw(6) << 78.987 << setw(6) << "C" << endl;
}


