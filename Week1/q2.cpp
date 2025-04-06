//Write a C++ program that declares and initializes variables of different data types (int, float, char, double, bool). 
//Print the values of these variables along with their sizes using sizeof().

#include <iostream> 
using namespace std;

int main() {
    // Declare variables
    int myInt = 10;
    float myFloat = 3.14f;
    char myChar = 'A';
    double myDouble = 3.14159265;
    bool myBool = true;

    // Print 
    cout << "int value: " << myInt << ", size: " << sizeof(myInt) << " bytes" << endl;
    cout << "float value: " << myFloat << ", size: " << sizeof(myFloat) << " bytes" << endl;
    cout << "char value: " << myChar << ", size: " << sizeof(myChar) << " byte" << endl;
    cout << "double value: " << myDouble << ", size: " << sizeof(myDouble) << " bytes" << endl;
    cout << "bool value: " << myBool << ", size: " << sizeof(myBool) << " byte" << endl;

    return 0;
}