#include <iostream>
#include <string>


// A simple Log function to type into the program
void Log(const char* message)
{
    std::cout << message << std::endl;
}


// Generic Addition Function
void Add(double a, double b)
{
    std::cout << "Sum: ";
    std::cout << a + b << std::endl;
}


// Generic Subtraction Function
void Sub(double a, double b)
{
    std::cout << "Difference: ";
    std::cout << a - b << std::endl;
}


// Generic Multiplication Function
void Mult(double a, double b)
{
    std::cout << "Product: ";
    std::cout << a * b << std::endl;
}


// Generic Division Function
void Div(double a, double b)
{
    std::cout << "Quotient: ";
    std::cout << a / b << std::endl;
}


// Main
int main()
{
    double a, b;
    std::string oper;                    // Used string for the operator so I could use if statements below
    Log("Enter a basic equation:");
    std::cin >> a >> oper >> b;          // Collecting a then operator then b


    // Depending on operator input, changes the math function that is called, with a basic fail check
    if (oper == "+") {
        Add(a, b);
    } else if (oper == "-") {
        Sub(a, b);
    } else if (oper == "*") {
        Mult(a, b);
    } else if (oper == "/") {
        Div(a, b);
    } else {
        Log("Invalid operation!");
    }
}
