#include <iostream>
#include "src/TriangleNumberCalculator.hpp"

int main() {
    TriangleNumberCalculator calculator;

    std::cout << calculator.value(1) << std::endl;  // 1
    std::cout << calculator.value(2) << std::endl;  // 3
    std::cout << calculator.value(4) << std::endl;  // 10

    std::cout << calculator.add(1, 1) << std::endl; // 2
    std::cout << calculator.add(2, 3) << std::endl; // 9
    std::cout << calculator.add(4, 2) << std::endl; // 13

    std::cout << calculator.subtract(1, 1) << std::endl; // 0
    std::cout << calculator.subtract(2, 3) << std::endl; // -3
    std::cout << calculator.subtract(4, 2) << std::endl; // 7

    return 0;
}

