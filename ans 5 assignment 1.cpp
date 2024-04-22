Step 1: Create a header file named "Find_Calculation.h" and define the function prototypes inside it.

Cpp1
// Find_Calculation.h

#ifndef FIND_CALCULATION_H
#define FIND_CALCULATION_H

double find_Sqrt(double value);
double find_Cube(double value);
double find_Pow(double base, double exponent);

#endif
Step 2: Implement the functions in a corresponding source file, for example, "Find_Calculation.cpp".

Cpp2
// Find_Calculation.cpp

#include "Find_Calculation.h"

double find_Sqrt(double value) {
    double epsilon = 1e-10;
    double guess = value / 2.0;
    while (abs(guess * guess - value) > epsilon) {
        guess = (guess + value / guess) / 2.0;
    }
    return guess;
}

double find_Cube(double value) {
    return value * value * value;
}

double find_Pow(double base, double exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
Step 3: Include the header file in your C++ code where you want to use these functions and call them accordingly.

Cpp3
// YourMain.cpp

#include <iostream>
#include "Find_Calculation.h"

int main() {
    double n1, n2, result;

    std::cout << "Enter a number: ";
    std::cin >> n1;

    // Calculate and display square root
    result = find_Sqrt(n1);
    std::cout << "Square root of " << n1 << " is: " << result << std::endl;

    // Calculate and display cube
    result = find_Cube(n1);
    std::cout << "Cube of " << n1 << " is: " << result << std::endl;

    std::cout << "Enter another number: ";
    std::cin >> n2;

    // Calculate and display power
    result = find_Pow(n1, n2);
    std::cout << n1 << " raised to the power " << n2 << " is: " << result << std::endl;

    return 0;
}
Ensure that "Find_Calculation.h", "Find_Calculation.cpp", and "YourMain.cpp" are in the same directory when you compile and run the code. This way, you have created your own header file named "Find_Calculation" containing three functions to compute square root, cube, and power of integer values, and used them in your C++ code.

