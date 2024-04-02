#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Vvedite razmer massiva: ";
    std::cin >> n;

    std::vector<double> A(n);
    std::vector<double> B, C;
    double product = 1.0;
    double sum = 0.0;
    bool foundMin = false;
    double minElement;

    std::cout << "Vvedite elementy massiva A: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
        if (A[i] != 0) {
            product *= A[i];
        }
        if (A[i] % 2 == 0 && !foundMin) {
            sum += A[i];
        }
        if (A[i] < minElement || !foundMin) {
            minElement = A[i];
            foundMin = true;
        }
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
        if (A[i] % 2 == 0 && !firstEvenRemoved) {
            A.erase(A.begin() + i);
            firstEvenRemoved = true;
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