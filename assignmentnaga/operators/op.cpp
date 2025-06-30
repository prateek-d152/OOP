#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "(a == b): " << (a == b) << endl;
    cout << "(a != b): " << (a != b) << endl;
    cout << "(a > b): " << (a > b) << endl;
    cout << "(a < b): " << (a < b) << endl;
    cout << "(a >= b): " << (a >= b) << endl;
    cout << "(a <= b): " << (a <= b) << endl;

    cout << "\nLogical Operators:" << endl;
    cout << "(a > 5 && b < 10): " << ((a > 5) && (b < 10)) << endl;
    cout << "(a < 5 || b > 2): " << ((a < 5) || (b > 2)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    cout << "\nBitwise Operators:" << endl;
    cout << "(a & b): " << (a & b) << endl;
    cout << "(a | b): " << (a | b) << endl;
    cout << "(a ^ b): " << (a ^ b) << endl;
    cout << "(a << 1): " << (a << 1) << endl;
    cout << "(b >> 1): " << (b >> 1) << endl;

    cout << "\nAssignment Operators:" << endl;
    int c = a; 
    cout << "c = " << c << endl;
    c += b;
    cout << "c += b: " << c << endl;
    c -= b;
    cout << "c -= b: " << c << endl;
    c *= b;
    cout << "c *= b: " << c << endl;
    c /= b;
    cout << "c /= b: " << c << endl;

    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "a++: " << a++ << " (post-increment)" << endl;
    cout << "++a: " << ++a << " (pre-increment)" << endl;
    cout << "b--: " << b-- << " (post-decrement)" << endl;
    cout << "--b: " << --b << " (pre-decrement)" << endl;

    return 0;
}
