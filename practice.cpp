#include <iostream>
#include <vector>
#include <type_traits>

int main() {
    const int x = 53;
    std::cout << "x: " << x << '\n' ;
    std::cout << std::is_const_v<int> << '\n';
    std::cout << std::is_const_v<const int> << '\n';
    std::cout << std::is_const_v<decltype(x)> << '\n';

    return 0;
}
