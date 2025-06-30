#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Using []: " << numbers[2] << endl;  
    cout << "Using []: " << numbers[10] << endl; 

    cout << "Using at(): " << numbers.at(2) << endl; 

    cout << "Using at(): " << numbers.at(10) << endl;
    return 0;
}
