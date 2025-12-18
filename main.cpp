#include <bitset>
#include <iostream>

int main() {
    std::bitset<8> bin{5};
    std::cout << "binary: " << bin << '\n';
    bin.set(1);
    std::cout << "altered: " << bin.count() << '\n';
    return 0;
}
