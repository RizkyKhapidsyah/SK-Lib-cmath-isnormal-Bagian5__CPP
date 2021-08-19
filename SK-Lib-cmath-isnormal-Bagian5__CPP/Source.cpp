#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << std::boolalpha
        << "isnormal(NaN) = " << std::isnormal(NAN) << '\n'
        << "isnormal(Inf) = " << std::isnormal(INFINITY) << '\n'
        << "isnormal(0.0) = " << std::isnormal(0.0) << '\n'
        << "isnormal(DBL_MIN/2.0) = " << std::isnormal(DBL_MIN / 2.0) << '\n'
        << "isnormal(1.0) = " << std::isnormal(1.0) << '\n';

    _getch();
    return 0;
}