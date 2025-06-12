#include <iostream>
using namespace std;

// Function to calculate sum using a while loop
int calculateSum(int n) {
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    // For loop: Print numbers from 1 to 10
    cout << "Numbers from 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Function call
    int result = calculateSum(10);
    cout << "Sum from 1 to 10 = " << result << endl;

    return 0;
}

