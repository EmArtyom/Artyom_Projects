#include <iostream>

int main() {
    int N;
    int count = 0;

    std::cout << "Vvedite celoe polozhitel'noe chislo N: ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0) {
            count++;
        }
    }

    std::cout << "Kolichestvo natural'nyh chisel kratnyh tryom i ne prevyshayushchih chislo N: " << count << std::endl;

    return 0;
}
//Емельяненко