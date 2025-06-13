#include <iostream>
using namespace std;

void printData(int i) {
    cout << "Integer value: " << i << endl;
}

void printData(double f) {
    cout << "Double value: " << f << endl;
}

void printData(string s) {
    cout << "String value: " << s << endl;
}

int main() {
  
    printData(10);            
    printData(3.14159);       
    printData("Hello World"); 

    return 0;
}
