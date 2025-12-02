#include <cmath>
#include <iostream>

// The user is asked for the height of the tower in meters
// gravity is 9.8m/s^2
// have the program output the height the ball is above the ground in seconds

double getUserTowerHeight() {
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

void informUser(double height, double seconds) {
    std::cout << "At " << seconds << " seconds, the ball is height: " << height
              << " meters\n";
}

void tripTerminate(double seconds) {
    std::cout << "At " << seconds << " the ball is on the ground.\n";
}

void calculate(double height) {
    double seconds{0};
    double gravity{9.8};

    while (height >= 0) {
        double distance_fallen = gravity * pow(seconds, 2) / 2;
        height -= distance_fallen;
        informUser(height, seconds);
        ++seconds;
    }
    tripTerminate(seconds);
}

int main() {
    calculate(getUserTowerHeight());
    return 0;
}
