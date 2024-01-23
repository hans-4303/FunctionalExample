#include "FunctionalExample.h"
#include <iostream>

int main() {
    std::vector<int> input = { 1, 2, 3, 4, 5 };
    std::vector<int> squared = SquareElements(input);

    /// <summary>
    /// 불변성 체크 됨
    /// </summary>
    std::cout << "Origin elements: ";
    for (int value : input) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cout << "Squared elements: ";
    for (int value : squared) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::cin.get();

    return 0;
}
