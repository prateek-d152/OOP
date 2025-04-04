#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables of different data types
    int intVar = 42;
    float floatVar = 3.14f;
    char charVar = 'A';
    double doubleVar = 3.14159;
    bool boolVar = true;

    // Print the values and sizes of the variables
    cout << "Integer value: " << intVar << ", Size: " << sizeof(intVar) << " bytes" << endl;
    cout << "Float value: " << floatVar << ", Size: " << sizeof(floatVar) << " bytes" << endl;
    cout << "Character value: " << charVar << ", Size: " << sizeof(charVar) << " bytes" << endl;
    cout << "Double value: " << doubleVar << ", Size: " << sizeof(doubleVar) << " bytes" << endl;
    cout << "Boolean value: " << boolVar << ", Size: " << sizeof(boolVar) << " bytes" << endl;

    return 0;
}