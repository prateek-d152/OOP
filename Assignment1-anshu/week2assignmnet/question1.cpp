#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);
    cout << name.length() << endl;
    cout << name.find(' ') << endl;
    int pos = name.find(' ');
    name = name.substr(0, pos + 1) + "XYZ";
    cout << name << endl;
    return 0;
}
