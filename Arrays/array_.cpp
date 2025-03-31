#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    sort(numbers, numbers + size);
    cout << "Ascending Order: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    sort(numbers, numbers + size, greater<int>());
    cout << "Descending Order: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    reverse(numbers, numbers + size);
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
