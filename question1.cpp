#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    // Print numbers from 1 to 10 using a for loop
    cout << "Numbers from 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Call calculateSum and print result
    int result = calculateSum(10);
    cout << "Sum from 1 to 10: " << result << endl;

    return 0;
}
