#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // O(n)
    }
    cout << endl;
    return 0;
}
