#include <iostream>
#include <fstream>
#include "matrix.h"

int main() {
    std::ifstream fin("C:\\mishinu\\input.txt");

    matrix elem;
    elem.read(fin);
    int n;
    int** m = elem.translate(n);

    std::cout << n << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            std::cout << m[i][j] << " ";

        std::cout << std::endl;
    }

    return 0;
}
