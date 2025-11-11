#include <iostream>
#include <vector>
#include <array>

void printArray(int arr[]);

int main() {
    int arr[] = {1,3,5,7,9};
    printArray(arr);
    return 0;
}

void printArray(int arr[]) {
/*    for (int num : arr) {
        std::cout << num << '\n';
    }
    */

    std::cout << "size of arr: " << sizeof(arr) << '\n'; 
}
