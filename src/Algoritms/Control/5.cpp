#include <iostream>

bool isDeficient(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum < number;
}

int main() {
    int number;

    std::cout << "Vvedite celoe polozhitel'noe chislo: ";
    std::cin >> number;

    if (isDeficient(number)) {
        std::cout << number << " - nedostatochnoe chislo." << std::endl;
    }
    else {
        std::cout << number << " - ne yavlyaetsya nedostatochnym chislom." << std::endl;
    }

    return 0;
}
//Емельяненко А.М.