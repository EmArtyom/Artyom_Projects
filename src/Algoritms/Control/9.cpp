#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

bool containsDigitSeven(int number) {
    while (number > 0) {
        if (number % 10 == 7) {
            return true;
        }
        number /= 10;
    }
    return false;
}

int main() {
    std::vector<int> X = { 3, 8, 12, 5, 20 }; // Пример значений для массива X
    std::vector<int> Y = { 2, 3, 5, 7, 11, 13, 17, 19, 23 }; // Пример значений для массива Y
    std::vector<int> Z;

    // Находим два наибольших элемента в массиве X
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int num : X) {
        if (num > max1) {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2) {
            max2 = num;
        }
    }

    // Находим пять последних простых чисел в массиве Y
    int primeCount = 0;
    for (int i = Y.size() - 1; i >= 0 && primeCount < 5; --i) {
        if (isPrime(Y[i])) {
            Z.push_back(Y[i]);
            primeCount++;
        }
    }

    // Проверяем содержит ли массив Z числа, в которых есть цифра "7"
    bool containsSeven = false;
    for (int num : Z) {
        if (containsDigitSeven(num)) {
            containsSeven = true;
            break;
        }
    }

    std::cout << "Dva naibol'shih elementa iz massiva X: " << max1 << ", " << max2 << std::endl;
    std::cout << "Pyat' poslednih prostyh chisel iz massiva Y: ";
    for (int num : Z) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    if (containsSeven) {
        std::cout << "Massiv Z soderzhit chisla, v kotoryh est' cifra '7'." << std::endl;
    }
    else {
        std::cout << "Massiv Z ne soderzhit chisel, v kotoryh est' cifra '7'." << std::endl;
    }

    return 0;
}