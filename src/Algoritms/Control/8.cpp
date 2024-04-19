#include <iostream>
#include <vector>
#include <algorithm> // Для использования std::min_element

int main() {
    int n;
    std::cout << "Vvedite razmer massiva: ";
    std::cin >> n;

    std::vector<double> A(n);
    std::vector<double> B, C;
    double product = 1.0;
    double sum = 0.0;

    std::cout << "Vvedite elementy massiva A: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
        if (A[i] != 0) {
            product *= A[i];
        }
    }

    // Находим минимальный элемент
    auto minElementIter = std::min_element(A.begin(), A.end());

    // Суммируем все элементы до минимального
    for (auto it = A.begin(); it != minElementIter; ++it) {
        sum += *it;
    }

    for (int i = 0; i < n; ++i) {
        if (A[i] > 0) {
            B.push_back(A[i]);
        }
        else if (A[i] < 0) {
            C.push_back(A[i]);
        }
    }

    bool firstEvenRemoved = false;
    for (int i = 0; i < n; ++i) {
        if (fmod(A[i], 2.0) == 0.0 && !firstEvenRemoved) { // Использование fmod для проверки чётности
            A.erase(A.begin() + i);
            firstEvenRemoved = true;
            break; // Прерываем цикл после удаления первого чётного элемента
        }
    }

    std::cout << "Proizvedenie nenulevyh elementov massiva: " << product << std::endl;
    std::cout << "Summa chyotnyh chisel do minimal'nogo elementa: " << sum << std::endl;

    std::cout << "Massiv B (polozhitel'nye chisla): ";
    for (double num : B) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Massiv C (otricatel'nye chisla): ";
    for (double num : C) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Massiv A posle udaleniya pervogo chyotnogo elementa: ";
    for (double num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}