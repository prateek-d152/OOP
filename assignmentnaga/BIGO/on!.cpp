#include <iostream>
#include <algorithm>
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) cout << s << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            permute(s, l + 1, r);  // O(n!)
            swap(s[l], s[i]);  // backtrack
        }
    }
}

int main() {
    string str = "AB";
    permute(str, 0, str.length() - 1);
    return 0;
}
