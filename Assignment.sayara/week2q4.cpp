#include <iostream>

using namespace std;

int main() {
    vector<int> numbers;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }
    if (numbers.size() >= 3) {
        numbers.erase(numbers.begin() + 2);
    }
    cout << "Elements in the vector: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
