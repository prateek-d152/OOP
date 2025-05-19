#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, reversed = "";
    cout << "Enter a string: ";
    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
