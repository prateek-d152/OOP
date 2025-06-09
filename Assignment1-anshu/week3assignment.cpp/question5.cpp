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
    } // r2 goes out of scope here and destructor called

    // r1 will be destroyed at end of main
    return 0;
}
