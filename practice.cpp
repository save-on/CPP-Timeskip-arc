#include <iostream>

int readNum() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAns(int x) { std::cout << "The sum is: " << x << '\n'; }

int main() {
    int x{readNum()};
    int y{readNum()};
    writeAns(x + y);

    return 0;
}
