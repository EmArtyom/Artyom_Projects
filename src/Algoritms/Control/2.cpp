#include <iostream>

int main() {
    int B;
    std::cout << "Kolichestvo polnyh kilobajtov: ";
    std::cin >> B;

    int KB = B / 1024; // Количество полных килобайтов
    int remainder = B % 1024; // Остаток в байтах

    std::cout << "Kolichestvo polnyh kilobajtov: " << KB << std::endl;
    std::cout << "Ostatok v bajtah: " << remainder << std::endl;

    return 0;
}
//Емельяненко