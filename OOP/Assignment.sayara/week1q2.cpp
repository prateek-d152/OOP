#include <iostream> 

using namespace std;

int main() {
    int myInt = 10;
    float myFloat = 5.5;
    char myChar = 'C';
    double myDouble = 10.123;
    bool myBool = true;

    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "Character: " << myChar << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Boolean: " << myBool << endl;

    cout << "Size of int: " << sizeof(myInt) << " bytes" << endl;
    cout << "Size of float: " << sizeof(myFloat) << " bytes" << endl;
    cout << "Size of char: " << sizeof(myChar) << " byte" << endl;
    cout << "Size of double: " << sizeof(myDouble) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(myBool) << " byte" << endl;

    return 0;
}
