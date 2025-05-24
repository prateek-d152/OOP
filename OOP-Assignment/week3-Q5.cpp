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
    Resource r1; // Constructor called here

    {
        Resource r2; // Constructor called here
    } // Destructor for r2 called here (end of inner scope)

    // Destructor for r1 called here (end of main scope)

    return 0;
}

/*
Output order explanation:
- r2 is created and destroyed first because it is in an inner scope.
- r1 is destroyed last since it's in the main scope.
*/
