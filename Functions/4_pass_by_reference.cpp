#include <iostream>
using namespace std;

void modify(int &x) {
    x = x + 10;
}

int main() {
    int a = 5;
    int &b = a;
    b++;
    cout << a <<endl ;
}
