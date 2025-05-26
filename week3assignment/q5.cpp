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
    }

    return 0;
}

