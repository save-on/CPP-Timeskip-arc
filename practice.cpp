#include <iostream>

int countdown(int n);
int main() {
  int startNumber{};
  while (true) { 
    std::cout << "Input a number greater than 0.. " << std::endl;
    std::cin >> startNumber;
    if (!startNumber && startNumber != 0) {
      std::cout << "You must insert a number." << std::endl;
      continue;
    }
    return countdown(startNumber);
  }
}

int countdown(int n) {
  if (n == 0) {
    std::cout << "Blast off!!" << std::endl;
    return 0;
  }
  
  if (n < 0) {
    std::cout << n << " Not amused.." << std::endl;
    ++n;
    return countdown(n);
  }
  
  std::cout << n << "..." << std::endl;
  --n;
  return countdown(n);
}
