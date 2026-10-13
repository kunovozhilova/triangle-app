#include <iostream>
#include "check.h"
#include "calc.h"
#include "type.h"

int main() {
    double a, b, c;

    if (!isTriangleValid(a, b, c)) {
    std::cout << "Треугольник не существует." << std::endl;
    return 0;
}
    std::cout << "Введите три стороны треугольника: ";
    std::cin >> a >> b >> c;
    
        // ... (код проверки на существование) ...

    std::cout << "Треугольник существует, он " << getTriangleType(a, b, c) << "." << std::endl;
    std::cout << "Периметр равен " << getPerimeter(a, b, c) << std::endl;
    std::cout << "Площадь равна " << getArea(a, b, c) << std::endl;
    return 0;
}