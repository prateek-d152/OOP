#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5; // change does not affect original variable
}

void incrementByReference(int &x) {
    x += 5; // change affects original variable
}

int main() {
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue: " << num << endl; // still 10

    incrementByReference(num);
    cout << "After incrementByReference: " << num << endl; // now 15

    return 0;
}
