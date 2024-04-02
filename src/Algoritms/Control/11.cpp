#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 3, -5, 2, 7, -4, 8, -1 }; // Пример значений для массива

    int firstNegativeIndex = -1, lastNegativeIndex = -1;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    if (firstNegativeIndex == -1 || lastNegativeIndex == -1) {
        std::cout << "V massive net otricatel'nyh chisel." << std::endl;
        return 0;
    }

    std::vector<int> elementsBetweenNegatives(numbers.begin() + firstNegativeIndex + 1, numbers.begin() + lastNegativeIndex);
    std::sort(elementsBetweenNegatives.begin(), elementsBetweenNegatives.end(), [](int a, int b) {
        return abs(a) > abs(b);
        });

    std::cout << "Elementy, raspolozhennye mezhdu pervym i poslednim otricatel'nymi znacheniyami v poryadke ubyvaniya modulej: ";
    for (int num : elementsBetweenNegatives) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}