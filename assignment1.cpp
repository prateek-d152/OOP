#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// 1. String Manipulation
void stringManipulation() {
    cout << "\n--- 1. String Manipulation ---\n";
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Number of characters: " << fullName.length() << endl;

    size_t spacePos = fullName.find(' ');
    if (spacePos != string::npos) {
        cout << "Position of first space: " << spacePos << endl;
        string replaced = fullName.substr(0, spacePos) + " XYZ";
        cout << "After replacing last name: " << replaced << endl;
    } else {
        cout << "No space found in the name!" << endl;
    }
}

// 2. Array Operations
void arrayOperations() {
    cout << "\n--- 2. Array Operations ---\n";
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr + 10);

    cout << "Sorted array: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. 2D Array - Matrix Addition
void matrixAddition() {
    cout << "\n--- 3. Matrix Addition ---\n";
    int mat1[2][2], mat2[2][2], result[2][2];

    cout << "Enter elements of first 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> mat1[i][j];

    cout << "Enter elements of second 2x2 matrix:\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            cin >> mat2[i][j];

    cout << "Resulting matrix after addition:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

// 4. Vector Functions
void vectorFunctions() {
    cout << "\n--- 4. Vector Functions ---\n";
    vector<int> nums;
    int val;
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> val;
        nums.push_back(val);
    }

    if (nums.size() >= 3) {
        nums.erase(nums.begin() + 2);  // Remove third element (index 2)
    }

    cout << "Vector elements: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Main function
int main() {
    cin.ignore(); // to clear newline from buffer for getline()
    stringManipulation();
    arrayOperations();
    matrixAddition();
    vectorFunctions();

    return 0;
}
