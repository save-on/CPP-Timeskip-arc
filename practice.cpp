#include <iostream>
#include <functional>

int add(int x, int y) {
    return x + y;
}

int multiply( int x, int y) {
    return x * y;
}

int main() {
    std::function<int(int,int)> op;
      
    std::cout << "Enter two numbers: " << '\n';
    int numOne{};
    int numTwo{};

    std::cin >> numOne >> numTwo;

    std::cout << "Enter 1 for adding your numbers or, enter 2 for multiplying them. ";
    int option{};

    std::cin >> option;

    if (option == 1) {
        op = add;
    } else {
        op = multiply;
    }

    std::cout << "Your result is: " << op(numOne, numTwo) << '\n';
    
    return 0;
}
