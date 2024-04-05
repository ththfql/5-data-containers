#include <iostream>
#include <iomanip>

int main() {
    double columnWidth = 15; // 열 너비 설정
    std::cout << std::setw(columnWidth) << std::left << "Value" << std::setw(columnWidth) << std::left << "Squared Value" << std::endl;
    std::cout << std::setw(columnWidth * 2) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');

    for (int i = 1; i <= 1000; ++i) {
        double squaredValue = i * i;
        std::cout << std::setw(columnWidth) << std::left << i << std::setw(columnWidth) << std::left << squaredValue << std::endl;
    }

    return 0;