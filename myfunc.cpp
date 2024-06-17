// myfunc.cpp
///@bug It is known that print functions are not tested and probably dont work

///@file
///@brief File with realisation of our functions



#include "myfunc.h"
/// @brief Function that adds two complex numbers
/// @param a complex number
/// @param b complex number
/// @return Returns addition of a and b
std::complex<double> Myfunc::add(const std::complex<double>& a, const std::complex<double>& b) {
    return a + b;
}
/// @brief Function that subtracts one complex number from another
/// @param a complex number
/// @param b complex number
/// @return Returns the result of subtraction of b from a
std::complex<double> Myfunc::subtract(const std::complex<double>& a, const std::complex<double>& b) {
    return a - b;
}
/// @brief Function that multiplies two complex numbers
/// @param a complex number
/// @param b complex number
/// @return Returns multiplication of number a by b
std::complex<double> Myfunc::multiply(const std::complex<double>& a, const std::complex<double>& b) {
    return a * b;
}
/// @brief Function that divides one complex number by another
/// @param a complex number
/// @param b complex number
/// @return Returns division of number a by b
std::complex<double> Myfunc::divide(const std::complex<double>& a, const std::complex<double>& b) {
    return a / b;
}
/// @brief Useless function that does nonsense
/// @param a complex number
/// @param b complex number
/// @return Basically returns number a
std::complex<double> Myfunc::useless(const std::complex<double>& a, const std::complex<double>& b) {
    return a / b * b;
}
/// @brief Basic 'Hello world!' display function that found its way in this library
void Myfunc::printhello() {
    std::cout << "Hello world!\n";
}
/// @brief Error message function that is supposed to tell you when an error ocurred.
void Myfunc::errormessage(){
    std::cout << "This is the error message. You have done something wrong.\n";
}
/*
int Myfunc::biggestnumber(const int a, const int b) {
    if (a > b) { return a; }
    else if (a < b) { return b; }
    return 0;
}
*/

