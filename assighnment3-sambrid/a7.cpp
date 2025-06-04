#include <iostream>
#include <string>

using namespace std;


void printData(int i) {
    cout << "Printing integer: " << i << endl;
}

void printData(double f) {
    cout << "Printing double: " << f << endl;
}

void printData(string s) {
    cout << "Printing string: " << s << endl;
}

int main() {
 
    printData(42);               
    printData(3.14159);          
    printData("Hello, World!");  
    
    return 0;
}