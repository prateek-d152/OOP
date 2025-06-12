#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Number of characters: " << fullName.length() << endl;

    size_t spacePos = fullName.find(' ');
    if (spacePos != string::npos) {
        cout << "First space at position: " << spacePos << endl;

        // Replace last name with "XYZ"
        string firstName = fullName.substr(0, spacePos + 1);
        fullName = firstName + "XYZ";

        cout << "Modified Name: " << fullName << endl;
    } else {
        cout << "No space found in the name." << endl;
    }

    return 0;
}
