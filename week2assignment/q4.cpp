#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    if (nums.size() >= 3) {
        nums.erase(nums.begin() + 2);
    }
    
    cout << "Vector elements:\n";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
