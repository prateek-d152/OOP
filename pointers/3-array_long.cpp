#include <iostream>
using namespace std;

int main() {
    long values[] = {10000000000, 20000000000, 30000000000};
    long* p = values; 

    cout << "Value at p: " << *p << ", Address: " << p << endl; 
    p++;
    cout << "Value at p: " << *p << ", Address: " << p << endl;  
    p++;
    cout << "Value at p: " << *p << ", Address: " << p << endl; 

    return 0;
}
