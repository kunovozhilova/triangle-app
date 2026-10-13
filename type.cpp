#include "type.h"
#include <cmath>     
#include <algorithm> 

std::string getTriangleType(double a, double b, double c) {
   
    double max_side = std::max(a, std::max(b, c));
    double sum_sq_others = 0;

    if (max_side == a) sum_sq_others = b * b + c * c;
    else if (max_side == b) sum_sq_others = a * a + c * c;
    else sum_sq_others = a * a + b * b;

    double max_sq = max_side * max_side;
    std::string angle_type;

    if (std::abs(max_sq - sum_sq_others) < 1e-9) {
        angle_type = "прямоугольный";
    } else if (max_sq < sum_sq_others) {
        angle_type = "остроугольный";
    } else {
        angle_type = "тупоугольный";
    }

    std::string side_type = "";
    if (std::abs(a - b) < 1e-9 && std::abs(b - c) < 1e-9) {
        side_type = "равносторонний";
    } else if (std::abs(a - b) < 1e-9 || std::abs(b - c) < 1e-9 || std::abs(a - c) < 1e-9) {
        side_type = "равнобедренный";
    }

    if (!side_type.empty()) {
        return angle_type + " (и " + side_type + ")";
    }
    
    return angle_type; 
}