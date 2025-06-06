#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Number of characters: " << name.length() << endl;

    int spacePos = name.find(' ');
    cout << "Position of first space: " << spacePos << endl;

    if (spacePos != -1) {
        string firstName = name.substr(0, spacePos);
        cout << "Modified name: " << firstName << " XYZ" << endl;
    } else {
     
        cout << "Modified name: XYZ" << endl;
    }

    return 0;
}
