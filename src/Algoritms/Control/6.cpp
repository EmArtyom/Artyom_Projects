#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    bool hasPrime = false;

    std::cout << "Vvedite kolichestvo elementov v posledovatel'nosti: ";
    std::cin >> N;

    std::cout << "Vvedite posledovatel'nost' iz " << N << " celyh polozhitel'nyh chisel:" << std::endl;

    for (int i = 0; i < N; ++i) {
        int element;
        std::cin >> element;
        if (isPrime(element)) {
            hasPrime = true;
            break;
        }
    }

    if (hasPrime) {
        std::cout << "Posledovatel'nost' soderzhit hotya by odno prostoe chislo." << std::endl;
    }
    else {
        std::cout << "Posledovatel'nost' ne soderzhit prostyh chisel." << std::endl;
    }

    return 0;
}