#include <iostream>
#include <vector>
#include <type_traits>

int main() {
    int* x = new int;
    std::cout << "address of allocated memory: " << x << '\n';
    std::cout << "size of allocated memory   : " << sizeof(x) << '\n';
    delete x;
    std::cout << "address of allocated memory: " << x << '\n';
    std::cout << "size of allocated memory   : " << sizeof(x) << '\n';
    return 0;
}
