#include <iostream>
#include <vector>

// creating a calculator that is capable of doing the four basic operations with
// two numebers

void add(std::vector<int> vec) {
    int total{vec[0]};
    for (int i = 1; i < vec.size(); ++i) {
        total += vec[i];
    }
    std::cout << "The result is: " << total << '\n';
}

void subtract(std::vector<int> vec) {
    int total{vec[0]};
    for (int i = 1; i < vec.size(); ++i) {
        total -= vec[i];
    }
    std::cout << "The result is: " << total << '\n';
}

void divide(auto vec) {
    int total{vec[0]};
    for (int i = 1; i < vec.size(); ++i) {
        total /= vec[i];
    }
    std::cout << "The result is: " << total << '\n';
}

void multiply(std::vector<int> vec) {
    int total{vec[0]};
    for (int i = 1; i < vec.size(); ++i) {
        total *= vec[i];
    }
    std::cout << "The result is: " << total << '\n';
}

int getUserOperationInput() {
    std::cout << "Enter in preferred operation" << '\n';
    std::cout << "1. +, 2. -, 3. /, 4. *: ";
    int operation{};
    std::cin >> operation;

    return operation;
}

std::vector<int> getUserNumberInput(int amount) {
    std::cout << "Enter in " << amount << " numbers for calculation: ";
    std::vector<int> vec;
    for (int i = 0; i < amount; ++i) {
        int num{};
        std::cin >> num;
        vec.push_back(num);
    }
    return vec;
}

int main() {
    void (*op)(std::vector<int>);

    int amount = 2;

    std::vector<int> userNumbers{getUserNumberInput(amount)};
    int userOperations{getUserOperationInput()};

    if (userOperations == 1) {
        op = add;
    } else if (userOperations == 2) {
        op = subtract;
    } else if (userOperations == 3) {
        op = divide;
    } else {
        op = multiply;
    }

    op(userNumbers);

    return 0;
}
