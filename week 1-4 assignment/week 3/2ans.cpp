#include <iostream>

void incrementByValue(int x) {
    x += 5;  
}

void incrementByReference(int &x) {
    x += 5;  
}

int main() {
    int num = 10;

    incrementByValue(num);
    std::cout << "After incrementByValue(num): " << num << std::endl;

    incrementByReference(num);
    std::cout << "After incrementByReference(num): " << num << std::endl;

    return 0;
}
