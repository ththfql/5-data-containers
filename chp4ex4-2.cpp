#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(10) << "Value" << std::setw(15) << "Squared Value" << std::endl;
    std::cout << std::setw(25) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for (int i = 1; i <= 100; ++i) {
        std::cout << std::setw(10) << i << std::setw(15) << i * i << std::endl;
    }

    return 0;
}