#include <iostream>

void myFunction(int a, float b = 5.5) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    myFunction(10);  
    myFunction(10, 7.3);  

    return 0;
}
