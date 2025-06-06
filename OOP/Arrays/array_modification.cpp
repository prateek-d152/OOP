#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    arr[2] = 100;
    cout << "\nAfter modification: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    int indexToRemove = 2;
    for (int i = indexToRemove; i < size - 1; i++) {
        arr[i] = arr[i + 1];  
    }
    size--; 

    cout << "\nAfter removal: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
