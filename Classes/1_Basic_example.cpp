#include <iostream>
using namespace std;
class ClassName {
    public:
        int attribute1;
        double attribute2;
    
        void display() {
            cout << "Attribute1: " << attribute1 << endl;
            cout << "Attribute2: " << attribute2 << endl;
        }
    };
    
int main() {
    // Create an object of the class
    ClassName object1;

    object1.attribute1 = 10;
    object1.attribute2 = 20.5;

    object1.display(); 

    return 0;
}
