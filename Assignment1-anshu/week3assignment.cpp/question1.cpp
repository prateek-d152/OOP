#include <iostream>
using namespace std;

int calculateSum(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n;
        n--;
    }
    return sum;
}

int main() {
    for(int i = 1; i <= 10; i++)
        cout << i << " ";
    cout << endl;

    int result = calculateSum(10);
    cout << "Sum: " << result << endl;

    return 0;
}
