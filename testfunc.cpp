//testfunc

#include "testfunc.h"

int Testfunc::add(const int& a, const int& b) {
    return a + b;
}

int Testfunc::subtract(const int& a, const int& b) {
    return a - b;
}

int Testfunc::multiply(const int& a, const int& b) {
    return a * b;
}

int Testfunc::divide(const int& a, const int b) {
    return a / b;
}

int Testfunc::square(const int& a) {
    return a * a;
}

int Testfunc::half(const int& a) {
    return a / 2;
}

int Testfunc::randomfunc(const int& a, const int b) {
    return a * b - a * b + b;
}
