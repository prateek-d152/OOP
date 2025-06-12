#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // Remove third element (index 2)
    if (numbers.size() > 2) {
        numbers.erase(numbers.begin() + 2);
    }

    cout << "Elements in vector: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
