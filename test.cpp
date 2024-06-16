// test.cpp

#include <iostream>
#include <complex>
#include "myfunc.h"

int main(int argc, char* argv[]) {
    if (argc < 3 || std::string(argv[1]) == "--help") {//ключ --help
        std::cout << "Usage: ./test <real1> <imaginary1> <operation> <real2> <imaginary2>\nOperations: add, subtract, multiply, divide" << std::endl;
        return 1;
    }

    double real1 = std::stod(argv[1]);
    double imag1 = std::stod(argv[2]);

    std::complex<double> complex1(real1, imag1); //1 комплексное

    double real2 = std::stod(argv[4]);
    double imag2 = std::stod(argv[5]);

    std::complex<double> complex2(real2, imag2); //2 комплексное

    std::string operation = argv[3];

    std::complex<double> result;

    if (operation == "add") {
        result = Myfunc::add(complex1, complex2);
    }
    else if (operation == "subtract") {
        result = Myfunc::subtract(complex1, complex2);
    }
    else if (operation == "multiply") {
        result = Myfunc::multiply(complex1, complex2);
    }
    else if (operation == "divide") {
        result = Myfunc::divide(complex1, complex2);
    }
    else {
        std::cout << "Error: Invalid input.\n";//error
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}