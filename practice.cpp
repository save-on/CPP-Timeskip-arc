#include <iostream>
#include <string>
#include <utility>

int main() {

    std::string &&myString = "copy";
    std::string newString;

    std::cout << "myString: " << myString << '\n';
    std::cout << "newString: " << newString << '\n';

    // newString = std::move(myString);
    // newString = static_cast<std::string &&>(myString);
    newString = myString;

    std::cout << "myString: " << myString << '\n';
    std::cout << "newString: " << newString << '\n';

    return 0;
}
