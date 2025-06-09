#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5;
}

void incrementByReference(int &x) {
    x += 5;
}

int main() {
    int num = 10;
    incrementByValue(num);
    cout << "After incrementByValue: " << num << endl; // No change, passed by value

    incrementByReference(num);
    cout << "After incrementByReference: " << num << endl; // Changed, passed by reference

    return 0;
}
