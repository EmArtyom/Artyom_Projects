#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 123, 456, 789, 246, 135, 579, 802 }; // Пример значений для массива

    std::vector<int> group2, group3;
    int countOdd = 0;
    bool foundGroup2 = false, foundGroup3 = false;

    for (int num : numbers) {
        int temp = num;
        int oddCount = 0;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                oddCount++;
            }
            temp /= 10;
        }

        if (oddCount >= 2 && !foundGroup2) {
            group2.push_back(num);
            countOdd += oddCount;
            if (countOdd >= 4) {
                foundGroup2 = true;
            }
        }
        else if (oddCount >= 3 && !foundGroup3) {
            group3.push_back(num);
            if (group3.size() >= 2) {
                foundGroup3 = true;
            }
        }

        if (foundGroup2 && foundGroup3) {
            break;
        }
    }

    std::cout << "Vtoraya gruppa (sostoyashchaya iz ne menee chem dvuh nechyotnyh cifr): ";
    for (int num : group2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Tret'ya gruppa (sostoyashchaya iz ne menee chem tryoh nechyotnyh cifr): ";
    for (int num : group3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}