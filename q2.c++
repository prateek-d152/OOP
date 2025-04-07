#include <iostream>
using namespace std;

int main() {
    int myInt = 10;
    float myFloat = 3.14f;
    char myChar = 'A';
    double myDouble = 9.81;
    bool myBool = true;

    cout << "Integer: " << myInt << " (Size: " << sizeof(myInt) << " bytes)" << endl;
    cout << "Float: " << myFloat << " (Size: " << sizeof(myFloat) << " bytes)" << endl;
    cout << "Char: " << myChar << " (Size: " << sizeof(myChar) << " bytes)" << endl;
    cout << "Double: " << myDouble << " (Size: " << sizeof(myDouble) << " bytes)" << endl;
    cout << "Boolean: " << myBool << " (Size: " << sizeof(myBool) << " bytes)" << endl;

    return 0;
}
