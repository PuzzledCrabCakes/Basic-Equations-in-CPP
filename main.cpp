#include <iostream>
#include <string>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

void Add(double a, double b)
{
    std::cout << "Sum: ";
    std::cout << a + b << std::endl;
}

void Sub(double a, double b)
{
    std::cout << "Difference: ";
    std::cout << a - b << std::endl;
}

void Mult(double a, double b)
{
    std::cout << "Product: ";
    std::cout << a * b << std::endl;
}

void Div(double a, double b)
{
    std::cout << "Quotient: ";
    std::cout << a / b << std::endl;
}

int main()
{
    double a, b;
    std::string oper;
    Log("Enter a basic equation:");
    std::cin >> a >> oper >> b;
    
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
