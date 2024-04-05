#include <iostream>
#include <iomanip>

int main() {
    int columnWidth = 15; // 열 너비 설정
    std::cout << std::setw(columnWidth) << "Value" << std::setw(columnWidth) << "Squared Value" << std::endl;
    std::cout << std::setw(columnWidth * 2) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for (int i = 1; i <= 1000; ++i) {
        std::cout << std::setw(columnWidth) << i << std::setw(columnWidth) << i * i << std::endl;
    }

    return 0;
}