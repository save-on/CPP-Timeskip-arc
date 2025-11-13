#include <iostream>

namespace mOperation {
    int multiple(int x, int y) {
        std::cout << "I'm from mOperation" << '\n';
        return x * y;
    }
}

namespace nOperation {
    int multiple(int x, int y) {
        std::cout << "I'm from nOperation" << '\n';
        return x * y;
    }
}


int main() {
    mOperation::multiple(2, 3);
    nOperation::multiple(9, 9);
    return 0;
}
