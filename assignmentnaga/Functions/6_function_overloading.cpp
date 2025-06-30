#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult1 = add(5, 3); 
    int intResult2 = add(5, 3, 2); 
    double doubleResult = add(5.5, 3.2); 

    cout << "Addition of two integers: " << intResult1 << endl;
    cout << "Addition of three integers: " << intResult2 << endl;
    cout << "Addition of two doubles: " << doubleResult << endl;

    return 0;
}
