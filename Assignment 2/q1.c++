#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    // Count characters
    cout << "Total characters: " << name.length() << endl;

    // Find first space
    int spaceIndex = name.find(' ');
    cout << "First space at position: " << spaceIndex << endl;

    // Replace last name with "XYZ"
    if (spaceIndex != -1) {
        name = name.substr(0, spaceIndex + 1) + "XYZ";
        cout << "Modified name: " << name << endl;
    } else {
        cout << "No space found, can't replace last name." << endl;
    }

    return 0;
}
