#include <iostream>

int main() {

    int numberOfStudents{};
    std::cout << "How many students in our class?" << '\n';
    std::cin >> numberOfStudents;
    
    int* student_ids = new int[numberOfStudents];

    for(int i = 0; i < numberOfStudents; i++) {
        student_ids[i] = i;
    }

    delete[] student_ids; 
    return 0;
}
