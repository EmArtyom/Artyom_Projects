#include <iostream>
#include <cmath>

int convertToDecimal(int number, int base) {
    int decimalNumber = 0;
    int power = 0;
    while (number > 0) {
        int digit = number % 10;
        decimalNumber += digit * pow(base, power);
        number /= 10;
        power++;
    }
    return decimalNumber;
}

int convertFromDecimal(int number, int base) {
    int convertedNumber = 0;
    int power = 0;
    while (number > 0) {
        int digit = number % base;
        convertedNumber += digit * pow(10, power);
        number /= base;
        power++;
    }
    return convertedNumber;
}

int main() {
    int A, B, P = 4, Q = 6, R = 5;

    std::cout << "Vvedite chislo A v sisteme schisleniya s osnovaniem " << P << ": ";
    std::cin >> A;

    std::cout << "Vvedite chislo B v sisteme schisleniya s osnovaniem " << Q << ": ";
    std::cin >> B;

    int decimalA = convertToDecimal(A, P);
    int decimalB = convertToDecimal(B, Q);

    int C = 2 * pow(decimalB, 2) * (decimalA + decimalB);

    std::cout << "Znachenie C v desyatichnoj sisteme schisleniya: " << C << std::endl;
    std::cout << "Znachenie C v sisteme schisleniya s osnovaniem " << R << ": " << convertFromDecimal(C, R) << std::endl;

    return 0;
}