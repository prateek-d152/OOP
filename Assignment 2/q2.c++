#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int arr[10];

    // Take input
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + 10);

    // Display sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
