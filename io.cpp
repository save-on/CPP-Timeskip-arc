#include "io.h"
#include <iostream>

int readNumber() {
    // get number from user
    std::cout << "Enter a number: ";
    int userNumber{};
    std::cin >> userNumber;
    // return number from user
    return userNumber;
}

void writeAnswer(int result) {
    std::cout << "The number you entered is: " << result << '\n';
}
