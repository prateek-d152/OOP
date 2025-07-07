#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int val;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> val;
        v.push_back(val);
    }

    if (v.size() >= 3)
        v.erase(v.begin() + 2); // Remove 3rd element (index 2)

    cout << "Elements in vector: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
