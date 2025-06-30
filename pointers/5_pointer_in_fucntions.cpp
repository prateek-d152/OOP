// #include <iostream>
// using namespace std;

// void increment(int n) {
//     n++;  
//     cout <<n <<endl;
// }

// int main() {
//     int x = 5;
//     increment(x);
//     cout << x << endl; 
//     return 0;
// }


#include <iostream>
using namespace std;

void increment(int* n) {
    (*n)++;  
}

int main() {
    int x = 5;
    increment(&x);  
    cout << x<< endl; 
    return 0;
}



