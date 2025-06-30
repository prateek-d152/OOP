#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "Division by zero not allowed!";
    return a / b;
}

int main() {
    try {
        int result = divide(10, 10);
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;

    int a = 2;
    int* ptr = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptr<< endl;



    return 0;




}