#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*int main() {
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Number of characters: " << fullName.length() << endl;

    size_t spacePos = fullName.find(' ');
    cout << "Position of first space: " << spacePos << endl;

    if (spacePos != string::npos) {
        string modifiedName = fullName.substr(0, spacePos + 1) + "XYZ";
        cout << "Modified name: " << modifiedName << endl;
    } else {
        cout << "No space found in the name." << endl;
    }

    return 0;
}*/

/*int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + 10);

    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

/*int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    cout << "Enter values for Matrix 1 (2x2):" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix1[i][j];

    cout << "Enter values for Matrix 2 (2x2):" << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix2[i][j];

    // Matrix addition
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "Resulting Matrix after addition:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}*/

/*int main() {
    vector<int> numbers;
    
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    // Remove third element (index 2)
    if (numbers.size() >= 3) {
        numbers.erase(numbers.begin() + 2);
    }

    cout << "Vector elements: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}*/

/*bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}*/

/*int main() {
    string input, reversed = "";
    cout << "Enter a string: ";
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}*/

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
    cout << "Total sum: " << total << endl;

    return 0;
}
