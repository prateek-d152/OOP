#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    int total = sumArray(arr, 5);
    cout << "Sum of array elements: " << total << endl;

    return 0;
}
