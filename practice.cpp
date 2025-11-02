#include <iostream>
#include <array>

int main() {
  std::array<int, 4> list{};
  std::fill(list.begin(), list.end(), 72);
  for (auto ele: list) {
    std::cout << ele << std::endl;
  }
  return 0;
}
