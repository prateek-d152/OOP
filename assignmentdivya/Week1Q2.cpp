#include <iostream>
using namespace std;
int main() {
    float fnum = 5.5;
    char letter = 'A';
    double dnum = 3.14159;
    bool isTrue = true;
    cout << "Integer value: " << num << ", Size: " << sizeof(num) << " bytes" << endl;
    cout << "Float value: " << fnum << ", Size: " << sizeof(fnum) << " bytes" << endl;
    cout << "Char value: " << letter << ", Size: " << sizeof(letter) << " byte" << endl;
    cout << "Double value: " << dnum << ", Size: " << sizeof(dnum) << " bytes" << endl;
    cout << "Boolean value: " << isTrue << ", Size: " << sizeof(isTrue) << " byte" << endl;

    return 0;
}
