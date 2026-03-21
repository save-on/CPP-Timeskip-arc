#include <bitset>
#include <iostream>
#include <vector>

int main() {
  int number{};
  std::bitset<8> finalBinary{0b0000'0000};
  std::vector<int> vec{128, 64, 32, 16, 8, 4, 2, 1};
  while (true) {
    std::cout << "input a number between 0 - 255: ";
    std::cin >> number;
    if (number < 0 || number > 255) {
      std::cout << "Number doesn't fit the requirements" << '\n';
      continue;
    }
    break;
  }
  [[maybe_unused]] constexpr std::bitset<8> mask07{0b1000'0000};
  [[maybe_unused]] constexpr std::bitset<8> mask06{0b0100'0000};
  [[maybe_unused]] constexpr std::bitset<8> mask05{0b0010'0000};
  [[maybe_unused]] constexpr std::bitset<8> mask04{0b0001'0000};
  [[maybe_unused]] constexpr std::bitset<8> mask03{0b0000'1000};
  [[maybe_unused]] constexpr std::bitset<8> mask02{0b0000'0100};
  [[maybe_unused]] constexpr std::bitset<8> mask01{0b0000'0010};
  [[maybe_unused]] constexpr std::bitset<8> mask00{0b0000'0001};

  std::vector<std::bitset<8>> masks{mask07, mask06, mask05, mask04,
                                    mask03, mask02, mask01, mask00};

  for (int i = 0; i < vec.size(); ++i) {
    if ((number / vec[i]) % 2 != 0) {
      finalBinary |= masks[i];
    }
  }

  std::cout << finalBinary << '\n';

  return 0;
}
