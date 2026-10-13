#include <iostream>
#include "check.h"
#include "calc.h"
#include "type.h"

int main() {
    double a, b, c;
    std::cout << "Введите три стороны треугольника: ";
    std::cin >> a >> b >> c;
    
    std::cout << "Треугольник существует, он остроугольный." << std::endl;
    std::cout << "Периметр равен " << 0 << std::endl;
    std::cout << "Площадь равна " << 0 << std::endl;
    return 0;
}