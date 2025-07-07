#include <iostream>
using namespace std;

void printData(int i) {
    cout << "Integer: " << i << endl;
}

void printData(double f) {
    cout << "Double: " << f << endl;
}

void printData(string s) {
    cout << "String: " << s << endl;
}

int main() {
    printData(42);
    printData(3.14);
    printData("Hello, World!");

    return 0;
}
