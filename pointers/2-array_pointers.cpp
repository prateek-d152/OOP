#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* p = arr;  

    cout << "Value: " << *p << ", Address: " << p << endl;
    p++; 
    cout << "Value: " << *p << ", Address: " << p << endl;
    p++; 
    cout << "Value: " << *p << ", Address: " << p << endl;
    p--;  
    cout << "Value: " << *p << ", Address: " << p << endl;

    return 0;
}
