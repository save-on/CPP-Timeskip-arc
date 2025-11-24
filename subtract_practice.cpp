#include <iostream>
#include <vector>

int subtract(std::vector<int> numbers) {
    int result{numbers[0]};
    for (int i = 1; i < numbers.size(); ++i) {
        result -= numbers[i];
    }
    return result;
}

std::vector<int> readInputs(std::vector<int> numbers, int numOfInputs) {
    std::cout << "Enter " << numOfInputs
              << " random numbers seperated but a space or enter: ";
    for (int i = 0; i < numOfInputs; ++i) {
        std::cin >> numbers[i];
    }
    return numbers;
}

void writeInput(int number) {
    std::cout << "The number entered subtracted is: " << number << '\n';
}

int main() {
    int numOfInputs{2};
    std::vector<int> numbers(numOfInputs);

    int result = subtract(readInputs(numbers, numOfInputs));
    writeInput(result);

    return 0;
}
