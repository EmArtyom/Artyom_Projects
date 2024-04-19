#include <iostream>

int main() {
    int currentNumber, previousNumber;
    int signChanges = 0;
    bool firstNumber = true;

    std::cout << "Vvedite posledovatel'nost' nenulevyh chisel (0 dlya zaversheniya):" << std::endl;

    do {
        std::cin >> currentNumber;

        if (currentNumber == 0) {
            break;
        }

        if (!firstNumber && currentNumber * previousNumber < 0) {
            signChanges++;
        }

        previousNumber = currentNumber;
        firstNumber = false;

    } while (currentNumber != 0);

    std::cout << "Kolichestvo raz, kogda posledovatel'nost' pomenyaet znak: " << signChanges << std::endl;

    return 0;
}
//Емельяненко А.М.