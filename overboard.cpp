// This was just so I can test the limits of what C++ is willing to let me do. 
// This is not something that should be used in production


#include <iostream>
#include <string>

#define q /
#define start std::cout <<
#define end << std::endl
#define da double a
#define so std::string oper
#define db double b
#define v void Math
#define add if (oper == "+")
#define sub else if (oper == "-")
#define mult else if (oper == "*")
#define divi else if (oper == "/")
#define in else
#define inv start "Invalid!" end
#define sum start "Sum: "
#define su start a + b end
#define dif start "Difference: "
#define diff start a - b end
#define prod start "Product: "
#define pro start a * b end
#define quot start "Quotient: "
#define quo start a / b end
#define gre start "Enter a simple equation:" end
#define inp std::cin >> a >> oper >> b
#define cal Math(a, oper, b)
#define m int main()

v(da, so, db)
{
    add {
        sum;
        su;
    } sub {
        dif;
        diff;
    } mult {
        prod;
        pro;
    } divi {
        quot;
        quo;
    } in {
        inv;
    }
}


m
{
    da, b;
    so;
    gre;
    inp;
    cal;
}
