#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;

    
    cout << "Enter your full name: ";
    getline(cin, fullName);  

    
    cout << "Number of characters: " << fullName.length() << endl;

    
    size_t firstSpacePos = fullName.find(' ');
    if (firstSpacePos != string::npos) {
        cout << "First space at position: " << firstSpacePos << endl;

        
        string firstName = fullName.substr(0, firstSpacePos);
        fullName = firstName + " XYZ";
        cout << "Modified name: " << fullName << endl;
    } else {
        cout << "No space found (single name)." << endl;
    }

    return 0;
}