#include <iostream>
#include "math.h"

int main() {
    int a, b, c;
    double x, y;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "add: " << add(a, b) << std::endl;
    std::cout << "multiply: " << multiply(a, b) << std::endl;

    std::cout << "Enter third integer: ";
    std::cin >> c;
    std::cout << "add: " << add(a, b, c) << std::endl;

    std::cout << "Enter two doubles: ";
    std::cin >> x >> y;
    std::cout << "add: " << add(x, y) << std::endl;

    return 0;
}