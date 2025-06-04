#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    
    sort(arr, arr + SIZE); 

    
    cout << "\nSorted array (ascending order):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}