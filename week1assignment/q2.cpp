#include <iostream>
using namespace std;

int main() {
    int i = 42;
    float f = 3.14f;
    char c = 'A';
    double d = 6.28318;
    bool b = true;

    
    cout << "Integer: " << i << ", Size: " << sizeof(i) << " bytes" << endl;
    cout << "Float: " << f << ", Size: " << sizeof(f) << " bytes" << endl;
    cout << "Char: " << c << ", Size: " << sizeof(c) << " byte" << endl;
    cout << "Double: " << d << ", Size: " << sizeof(d) << " bytes" << endl;
    cout << "Boolean: " << b << ", Size: " << sizeof(b) << " byte" << endl;

    return 0;
}
