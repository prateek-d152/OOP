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
    Resource res1; // Constructor and destructor in main's scope

    {
        Resource res2; // Nested scope
    } // res2 destructor called here (end of scope)

    /*
      Explanation:
      - res2 is destroyed before res1 because it goes out of scope first.
      - Destructors are automatically called when an object goes out of scope.
    */

    return 0;
}
