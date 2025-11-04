#include <iostream>

void foo() {
    std::cout << "Hola" << '\n';
}

void bar() {
    std::cout << "Adios" << '\n';
}

int main () {
    char a = 'a';
    unsigned char b = 'b';
    signed char c = 'c';
    std::cout << "a: " << (void*)&a << '\n';
    std::cout << "b: " << (void*)&b << '\n';
    std::cout << "c: " << (void*)&c << '\n';
    std::cout << "foo: " << (void*)&foo << "\n\n";
    std::cout << "bar: " << (void*)&bar << "\n\n";
    return 0;
}
