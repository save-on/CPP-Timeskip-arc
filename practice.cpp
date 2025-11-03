#include <iostream>
#include <array>

int add(int x);

int main() {
  int a{};
  std::cin >> a;
  std::cout << add(a) << std::endl;
  return 0;
}

int add(int element) {
  if (!element) {
    std::cout << "you need to input a number" << std::endl;
  }
  
  return element + 10;
}
