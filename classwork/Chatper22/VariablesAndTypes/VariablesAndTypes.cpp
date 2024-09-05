#include <iostream>

//Entry point
int main()
{
	//Output a message - 1
	std::cout << "Hello World"<< std::endl;

	//Message -2
	std::cout << "Hello" << " " << "World" << std:: endl;

	//Message -3
	std::cout << "Hello";
	std::cout << " ";
	std::cout << "World";
	std::cout << std::endl;

	//Message -4
	std::cout << "Hello \tWorld\n";

	std::cout << "Hello \"Bob\"";

	//File Paths
	std::cout << "C:\\windows\\temp";
	//std::cout << R"C:\\windows\\temp";

	//Variables - named memory location to store data
	//Delaration - tell comiler a variable exists
    // Scope - lifetime of a variable/identifier: Point of declaration to end of block
    // Expression - can be used anywhere an expression is allowed
    // Styling - Name: nouns, Casing: Camel

    // variable-decl ::= T id [ '=' E ] [ '.' id [ '=' E ] }* ';'
	int length;
	length = 0;

	int releaseYear = 1900;

	int rating = 3, stars = 5;

	std::cout << length;

    //Identifiers 
    //int_hours, _1stGrade, 1stGrade, first - grade;
    int examgrade; hoursWorked;
    //int exam_grade, hour_worked; DONT DO THIS
    //std::cout << e

    // Types
    //  Defines what kind of data is stored, range, size
    //  Primitves - understood by lang
    // Type | Size | Range |
    // |- | - | 
    // | short | 2 | +-32767 (integral) |
    // | int | 4 | +- 2 billion (defaullt) |
    // | long | 4 | +-billion |
    // | unsiged * | * | 0-
    // Floats
    // | float | 4 | E- 38 | precision: 5-7 |
    // | double | 8 | E+308 | precision: 12-15 (default) |
    // Text
    // | char | 1 | -128 to 127 | character
    // | std::string | * | text | 
    // | bool | 1? | true or false 
    short s;
    int i = 0;
    long l = 5L;
    unsigned int ui = 3U; 
  //float pi = 3.14159f;
    double pi = 3.14159; 
    double largeNumber = 10E100; 
    char c = 'A';
    std::string name = "Bob";
    bool isPassing = true;
    //int isOK = 1; // Don't do this
    int intSize = sizeof(int);

    //Assignment
    // asn_op ::= V = E
    // Must be type compatible
    // Expression of type Vt
    // Associativity - Right 
    int shapeLength = 10;
    int shapeWidth = 20;
    int shapeArea;

    shapeArea = shapeLength;
    shapeWidth = 10;
    //20 = shareWidth;

    shapeArea = shapeLength = shapeWidth = 20; 

    //Arithmetic operators
    // + - * / % (int modulus)
    //  arith_op ::= Et op Et
    shapeArea = shapeLength * shapeWidth;
    int remainder = 10 % 3; // 1 
    int result = 10 / 3; // 3
    double dresult = 10.0 / 3.0; // 3.333

    // unary_op ::= + Et | - Et
    int positiveValue = 10;
    int negativeValue = -positiveValue;

    //Scope 
    // block-statement ::= { S* }
    {
        int newVariable = 10; 
    }
    //std::cout << newVariable;
    
    //String stuff
    //Not a primtive 
    //Doesn't work outside C++
    std::string message = "Hello";
    message = message + " World"; // message += " Wrold";
    message = message + " " + name;

    std::string empty;
    empty = empty + "Hello";

    // Combination operators
    //  V op= E
    empty += " World"; // empty = empty + " World"

    // C++ is strongly typed
    int number = 10;
    //number = "20"; // Comiler error, cannot change type of variable
     
    //Type inferencing (C++11)  
    // auto ::= compiler figures it out
    // Only usable in variable decls and a few other places
    // Must use in init expression when declaring the variable
    auto payRate = 45.6;  //   double payRate = 45.6;
    // payRate = "45.6";
    double averagePayRate = 40 / payRate;


    //Area of a circle = PI*r2 
    const double pi = 3.14159
    double radius = 10;

    //constant expression = expression that is calculated at compile time, primitive
    // 4+5 * 8 = 44 
    //Literals are great unless you need them everywhere (constant-expression)
    //Variables are better at reuse but may be accidentally changed
    //Const (constant expression) with name, type and value and read only, primitives
    double area = 3.14159 * radius * radius
    area = pi * radius * radius; 
    //pi = 10; // Error 

    //Structure - a group of related data points
    // Cannot use structs with cout
    // Struct variables are undefined 
    //Prompt user for a point 
   
   //int x, y;
    Point pt = {0}; //Zero initialize //pt.X = 0; pt.Y =0;
    std::cout << "Enter X value: ";
    pt.X = 5;
    std::cout << "Enter Y Value: ";
    pt.Y = 10;
    //(5, 10)
    std::cout << "(" << pt.X << pt.Y << ")";
    
    //Structassigment is value assignmet, all fields are copied
    Point pt2 = pt;
   
}
    //Declares a point as an X and Y value 
struct Point
{
    //Declare Varables  - fields 
    int X;
    int Y;
};

struct point2
{
    int x;
    int y;

};