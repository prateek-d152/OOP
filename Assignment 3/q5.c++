#include <iostream>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired!" << endl;
    }

    ~Resource() {
        cout << "Resource released!" << endl;
    }
};

int main() {
    Resource r1;

    {
        Resource r2;
    } // r2 goes out of scope here and destructor is called

    return 0;
}

// Destructors are called in reverse order of creation when objects go out of scope.
