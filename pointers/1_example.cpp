#include <iostream>
using namespace std;

int main() {
    int a = 10;          
    int* ptr = &a; 

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Value stored in ptr (address of a): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

    return 0;
}