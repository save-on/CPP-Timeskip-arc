#include <iostream>
#include <array>
#include <string>
#include <vector>
int main() {
    int x = 7;
    int* px = &x;
    int array[] = {1,3,5,7,9};
    int* heapArray = new int[1000];
    std::vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    
    // outputs
    std::cout << "x         : " << sizeof(x) << '\n'; 
    std::cout << "px        : " << sizeof(px) << '\n'; 
    std::cout << "array     : " << sizeof(array) << '\n'; 
    std::cout << "heapArray : " << sizeof(heapArray) << '\n'; 
    std::cout << "v         : " << sizeof(v) << '\n'; 
    std::cout << "v's size  : " << v.size() << '\n';
    return 0;
}
