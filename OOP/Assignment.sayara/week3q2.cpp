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
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = calculateSum(number);
    cout << "Sum from 1 to " << number << " is: " << result << endl;

    return 0;
}
