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
    Resource r1; // Constructor and destructor will be called in main scope

    {
        Resource r2; // Destructor for r2 will be called here when this block ends
    }

    return 0;
}

