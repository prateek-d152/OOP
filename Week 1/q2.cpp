#include <iostream>
using namespace std;

int main() {
    int intVar = 10;
    float floatVar = 3.14f;
    char charVar = 'K';
    double doubleVar = 99.99;
    bool boolVar = true;

    cout << "intVar = " << intVar << ", Size = " << sizeof(intVar) << " bytes" << endl;
    cout << "floatVar = " << floatVar << ", Size = " << sizeof(floatVar) << " bytes" << endl;
    cout << "charVar = " << charVar << ", Size = " << sizeof(charVar) << " bytes" << endl;
    cout << "doubleVar = " << doubleVar << ", Size = " << sizeof(doubleVar) << " bytes" << endl;
    cout << "boolVar = " << boolVar << ", Size = " << sizeof(boolVar) << " bytes" << endl;

    return 0;
}
