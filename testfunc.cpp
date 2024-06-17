//testfunc

#include "testfunc.h"

/// @brief Function of addition of two integer numbers
/// @param a integer 
/// @param b integer
/// @return Resulting addition of number a and b
int Testfunc::add(const int& a, const int& b) {
    return a + b;
}
/// @brief Function of subtraction of two integer numbers
/// @param a integer
/// @param b integer
/// @return Subtraction of number a by b
int Testfunc::subtract(const int& a, const int& b) {
    return a - b;
}
/// @brief Function of multiplication of two integers
/// @param a integer
/// @param b integer
/// @return Result of multiplication of a and b
int Testfunc::multiply(const int& a, const int& b) {
    return a * b;
}
/// @brief Function of division of two integers
/// @param a integer
/// @param b integer
/// @return Division of number a by b
int Testfunc::divide(const int& a, const int b) {
    return a / b;
}
/// @brief Function of square of integer number
/// @param a integer
/// @return Square of a
int Testfunc::square(const int& a) {
    return a * a;
}
/// @brief Function of finding half of number a
/// @param a 
/// @return Division of number a by two
int Testfunc::half(const int& a) {
    return a / 2;
}
/// @brief Random nonsense function
/// @param a integer
/// @param b integer
/// @return Basically returns b
int Testfunc::randomfunc(const int& a, const int b) {
    return a * b - a * b + b;
}
