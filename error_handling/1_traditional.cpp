#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
    if (b == 0) return -1;  // error code
    return a / b;
}

int main() {
    int result = divide(10, -10);
    if (result == -1)
        cout << "Division by zero error\n";
}
