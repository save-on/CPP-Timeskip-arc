#include <iostream>
#include "practice.h"

int main() {
  // can i change i or r1?
  int i = 42;
  const int &r1 = i;

  // I can initialize a const reference to a non object, can this too happen with a normal ref?
  const int &r2 = r1 * 2;
  const int &r3 = 42;

  std::cout << i << " :i" << std::endl;
  std::cout << r1 << " :r1" << std::endl;
  std::cout << r2 << " :r2" << std::endl;
  std::cout << r3 << " :r3" << std::endl;

  return 0;
}
