#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);  // O(2^n)
}

int main() {
    int n = 5;
    cout << "Fibonacci of " << n << ": " << fib(n) << endl;
    return 0;
}
