#include "check.h"
bool isTriangleValid(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}