#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    {
        Demo obj1;  
    }

    {
        Demo obj2;  }

    return 0;
}