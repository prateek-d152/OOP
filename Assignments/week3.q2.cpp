#include <iostream>
using namespace std;

void incrementByValue(int x) {
    x += 5;
    cout << "Inside incrementByValue: " << x << endl;
}

void incrementByReference(int &x) {
    x += 5;
    cout << "Inside incrementByReference: " << x << endl;
}

int main() {
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue, num = " << num << endl;

    incrementByReference(num);
    cout << "After incrementByReference, num = " << num << endl;

    /*
      Explanation:
      - incrementByValue does not change the original variable because it operates on a copy.
      - incrementByReference modifies the original variable since it's passed by reference.
    */

    return 0;
}
