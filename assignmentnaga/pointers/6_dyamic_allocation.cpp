// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of elements (max 5): ";
//     cin >> n;
    

//     int arr[5];  
//     if (n > 5) {
//         cout << "Error: Array size exceeds fixed limit!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < n; i++) {
//         arr[i] = i * 10;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];  

    for (int i = 0; i < n; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; 

    return 0;
}
