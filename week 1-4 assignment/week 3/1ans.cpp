#include <iostream>

int calculateSum(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        ++i;
    }
    return sum;
}

int main() {
    std::cout << "Numbers from 1 to 10:\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    int result = calculateSum(10);
    std::cout << "Sum from 1 to 10: " << result << std::endl;

    return 0;
}
