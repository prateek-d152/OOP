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
 
    cout << "After incrementByValue, num = " << num << endl;

    incrementByReference(num);
   
    cout << "After incrementByReference, num = " << num << endl;

    return 0;
}
