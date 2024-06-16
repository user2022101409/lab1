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