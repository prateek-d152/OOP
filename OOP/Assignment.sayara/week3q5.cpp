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
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue, num = " << num << endl;

    incrementByReference(num);
    cout << "After incrementByReference, num = " << num << endl;

    return 0;
}
