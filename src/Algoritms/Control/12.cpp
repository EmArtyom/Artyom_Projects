#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt"); // Предполагается, что информация хранится в файле input.txt
    if (!inputFile.is_open()) {
        std::cerr << "Oshibka otkrytiya fajla." << std::endl;
        return 1;
    }

    int pointCount = 0;
    std::string word;

    while (inputFile >> word) {
        for (char c : word) {
            if (c == '.') {
                pointCount++;
            }
        }
    }

    inputFile.close();

    std::cout << "Kolichestvo tochek v tekste: " << pointCount << std::endl;

    return 0;
}