#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    for(int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.erase(v.begin() + 2);
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    return 0;
}
