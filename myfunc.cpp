// myfunc.cpp

#include "myfunc.h"

std::complex<double> Myfunc::add(const std::complex<double>& a, const std::complex<double>& b) {
    return a + b;
}

std::complex<double> Myfunc::subtract(const std::complex<double>& a, const std::complex<double>& b) {
    return a - b;
}

std::complex<double> Myfunc::multiply(const std::complex<double>& a, const std::complex<double>& b) {
    return a * b;
}

std::complex<double> Myfunc::divide(const std::complex<double>& a, const std::complex<double>& b) {
    return a / b;
}

std::complex<double> Myfunc::useless(const std::complex<double>& a, const std::complex<double>& b) {
    return a / b * b;
}

void Myfunc::printhello() {
    std::cout << "Hello world!\n";
}

int Myfunc::biggestnumber(const int a, const int b) {
    if (a > b) { return a; }
    else if (a < b) { return b; }
    return 0;
}


