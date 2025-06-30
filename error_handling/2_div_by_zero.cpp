#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw runtime_error("Division by zero");
    return a / b;
}

int main() {
    try {
        int result = divide(10, -10);
        cout << "Result: " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what();
    }
}
