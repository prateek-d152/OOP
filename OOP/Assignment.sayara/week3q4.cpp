#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5;
    cout << "Inside incrementByValue, x = " << x << endl;
}

void incrementByReference(int &x) {
    x += 5;
    cout << "Inside incrementByReference, x = " << x << endl;
}

int main() {
    int num1 = 10;
    int num2 = 10;

    incrementByValue(num1);
    cout << "After incrementByValue, num1 = " << num1 << endl;

    incrementByReference(num2);
    cout << "After incrementByReference, num2 = " << num2 << endl;

    return 0;
}
