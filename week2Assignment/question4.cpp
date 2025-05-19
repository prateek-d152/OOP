#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        nums.push_back(value);
    }

    // Erase third element (index 2)
    if (nums.size() >= 3) {
        nums.erase(nums.begin() + 2);
    }

    cout << "Vector elements: ";
    for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
