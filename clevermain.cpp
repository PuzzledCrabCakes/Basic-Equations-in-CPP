#include <iostream>
#include <string>

#define start std::cout <<
#define end << std::endl

void Math(double a, std::string oper, double b)
{
    if (oper == "+") {
        start "Sum: ";
        start a + b end;
    } else if (oper == "-") {
        start "Difference: ";
        start a - b end;
    } else if (oper == "*") {
        start "Product: ";
        start a * b end;
    } else if (oper == "/") {
        start "Quotient: ";
        start a / b end;
    } else {
        start "Invalid!" end;
    }
}

int main()
{
    double a, b;
    std::string oper;
    start "Enter a simple equation:" end;
    std::cin >> a >> oper >> b;
    Math(a, oper, b);
}
