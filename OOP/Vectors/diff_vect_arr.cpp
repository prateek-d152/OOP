#include <iostream>
#include <vector>

int main() {
    // Array (Fixed size, cannot change size once declared)
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "Array elements:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Vector (Dynamic size, can change size)
    std::vector<int> vec = {1, 2, 3, 4, 5}; 
    vec.push_back(6); 
    vec.push_back(7); 

    std::cout << "Vector elements (after adding 2 elements):\n";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";

    // Modifying a vector element
    vec[0] = 10; 

    std::cout << "Vector elements (after modification):\n";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";

    // Bounds checking for vector using .at()
    std::cout << "Accessing vector element with bounds checking: " << vec.at(2) << "\n";
    // std::cout << "Accessing out-of-bounds element: " << vec.at(100) << "\n"; 

    // Array does not provide bounds checking
    std::cout << "Accessing array element (no bounds checking): " << arr[2] << "\n";
    // std::cout << "Accessing out-of-bounds element: " << arr[100] << "\n";

    // Example of dynamic memory allocation with vectors
    std::vector<int> dynamicVec;
    dynamicVec.push_back(10);
    dynamicVec.push_back(20);
    dynamicVec.push_back(30);

    std::cout << "Dynamic vector elements:\n";
    for (int i = 0; i < dynamicVec.size(); ++i) {
        std::cout << dynamicVec[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
