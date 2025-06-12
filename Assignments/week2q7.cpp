#include <iostream>

using namespace std;

int sumArray(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += arr[i];
    return total;
}

int main() {
    int arr[5];
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    int sum = sumArray(arr, 5);
    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
