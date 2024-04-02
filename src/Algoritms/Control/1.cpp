#include <iostream>
#include <cmath>

int main() {
    double d;
    std::cout << "Vvedite diagonal' kvadrata: ";
    std::cin >> d;

    double s = d * d / 2; // Формула для вычисления площади квадрата
    double r = sqrt(2) * d; // Формула для вычисления периметра квадрата

    std::cout << "Ploshchad' kvadrata: " << s << std::endl;
    std::cout << "Perimetr kvadrata: " << r << std::endl;

    return 0;
}
//Емельяненко А.М.