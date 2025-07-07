#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5;
    // Changes only inside this function
}

void incrementByReference(int &x) {
    x += 5;
    // This modifies the original variable since it's passed by reference
}

int main() {
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue, num = " << num << endl;
    // Output: 10 (value unchanged because it was passed by value)

    incrementByReference(num);
    cout << "After incrementByReference, num = " << num << endl;
    // Output: 15 (value changed because it was passed by reference)

    return 0;
}