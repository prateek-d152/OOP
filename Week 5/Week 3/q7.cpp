#include <iostream>
#include <string>
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
    int number = 42;
    double decimal = 3.14;
    string text = "Hello, world!";

    printData(number);   
    printData(decimal);  
    printData(text);     

    return 0;
}
