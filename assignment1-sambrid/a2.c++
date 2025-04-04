#include <iostream>
using namespace std;


int main() {
    int myInt = 25;
    float myFloat = 3.14f;
    char myChar = 'A';
    double myDouble = 5.6789;
    bool myBool = true;

    cout << "Int: " << myInt << ", Size: " << sizeof(myInt) << " bytes" << endl;
    cout << "Float: " << myFloat << ", Size: " << sizeof(myFloat) << " bytes" << endl;
    cout << "Char: " << myChar << ", Size: " << sizeof(myChar) << " bytes" << endl;
    cout << "Double: " << myDouble << ", Size: " << sizeof(myDouble) << " bytes" << endl;
    cout << "Bool: " << myBool << ", Size: " << sizeof(myBool) << " bytes" << endl;

    return 0;
}
