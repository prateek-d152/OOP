#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numbers;
    
   
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    
    
    std::cout << "Original vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    
    if (numbers.size() >= 3) {
        numbers.erase(numbers.begin() + 2);
    }
    
    
    std::cout << "Modified vector: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return 0;
}