// myfunc.h

#ifndef MYFUNC_H
#define MYFUNC_H

#include <complex>

class Myfunc {
public:
    static std::complex<double> add(const std::complex<double>& a, const std::complex<double>& b);
    static std::complex<double> subtract(const std::complex<double>& a, const std::complex<double>& b);
    static std::complex<double> multiply(const std::complex<double>& a, const std::complex<double>& b);
    static std::complex<double> divide(const std::complex<double>& a, const std::complex<double>& b);
    static std::complex<double> useless(const std::complex<double>& a, const std::complex<double>& b);
    static void printhello();
    static int Myfunc::biggestnumber(const int a, const int b);
};

#endif // MYFUNC_H