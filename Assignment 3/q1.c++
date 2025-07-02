#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n;
        n--;
    }
    return sum;
}

int main() {
    // Part 1: Print numbers from 1 to 10 using a for loop
    cout << "Numbers from 1 to 10:\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // Part 2 and 3: Call calculateSum with n = 10
    int result = calculateSum(10);
    cout << "Sum from 1 to 10 is: " << result << endl;

    return 0;
}
