#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0, i = 1;
    while (i <= n) {
        sum += i;
        ++i;
    }
    return sum;
}

int main() {
    
    for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    int total = calculateSum(10);
    cout << "Sum from 1 to 10: " << total << endl;

    return 0;
}
