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
    
    cout << "Numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    
    int sum = calculateSum(10);
    cout << "Sum of numbers from 1 to 10: " << sum << endl;
    
    return 0;
}