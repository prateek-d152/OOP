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
    int result = calculateSum(10);
    cout << "Sum from 1 to 10 is: " << result << endl;

    return 0;
}
