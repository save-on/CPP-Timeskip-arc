#include <iostream>

int numDoubler(int&& num) {
    return num * 2;
}

int numCollector() {
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;

    return num;
}

void numPrinter(int&& num) {
    std::cout << num << '\n';
}

int main() {
    numPrinter(numDoubler(numCollector()));
    return 0;
}
