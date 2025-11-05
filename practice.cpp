#include <iostream>

int main() {
    // 2 variables for collecting numbers
    int numberOne{};
    int numberTwo{};
    // Ask user for a number
    std::cout << "Give me a number\n";
    std::cin >> numberOne;
    // Ask user for second number
    std::cout << "Give me another number\n";
    std::cin >> numberTwo;
    // tell the user the result of adding the two
    std::cout << "If you were to add the two you'd get " << numberOne + numberTwo << '\n';
    // tell the user the result of subtracting the two
    std::cout << "Let's keep the subtracting positive!" << '\n';
    if (numberOne < numberTwo) {
        std::cout << "If you were to subtract the two you'd get " << numberTwo - numberOne << '\n';
        return 0;
    }
    std::cout << "If you were to subtract the you'd get " << numberOne - numberTwo << '\n';
    return 0;
}
