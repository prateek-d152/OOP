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
    cout << "Entering main function." << endl;

    Resource r1;

    {
        Resource r2;  

    }  

    cout << "Exiting main function." << endl;

}
