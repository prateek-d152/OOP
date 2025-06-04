#include <iostream>

using namespace std;

// Function that increments by value (receives a copy of the argument)
void incrementByValue(int x) {
    x += 5;  // Modifies only the local copy
}

// Function that increments by reference (receives the actual variable)
void incrementByReference(int &x) {
    x += 5;  // Modifies the original variable
}

int main() {
    int num = 10;
    
    cout << "Initial value of num: " << num << endl;
    
    // Pass by value demonstration
    incrementByValue(num);
    cout << "After incrementByValue: " << num << endl;
    // Output remains 10 because the function worked with a copy
    
    // Pass by reference demonstration
    incrementByReference(num);
    cout << "After incrementByReference: " << num << endl;
    // Output changes to 15 because the function modified the original variable
    
    return 0;
}