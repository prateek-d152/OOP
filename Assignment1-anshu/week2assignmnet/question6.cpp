#include <iostream>
using namespace std;

int main() {
    string s, r = "";
    cin >> s;
    for(int i = s.length() - 1; i >= 0; i--)
        r += s[i];
    cout << r;
    return 0;
}
