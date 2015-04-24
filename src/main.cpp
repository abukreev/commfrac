#include <commfrac.h>
#include <iostream>

int main () {

    CommFrac cf1(1, 2);
    CommFrac cf2(2, 3);
    std::cout << cf1 << " + " << cf2 << " = " << (cf1 + cf2) << std::endl;
    std::cout << cf1 << " - " << cf2 << " = " << (cf1 - cf2) << std::endl;
    std::cout << cf1 << " * " << cf2 << " = " << (cf1 * cf2) << std::endl;
    std::cout << cf1 << " / " << cf2 << " = " << (cf1 / cf2) << std::endl;

    return 0;
}
