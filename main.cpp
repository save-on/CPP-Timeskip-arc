#include <iostream>
#include <string>
void printString(std::string_view param) { std::cout << param << '\n'; }
std::string getName() {
    std::string s{"Alex"};
    return s;
}
int main() {
    std::string name{"Bobby"};
    std::string_view svName{name};

    name = "Fred";

    std::cout << name << '\n';
    std::cout << svName << '\n';
}
