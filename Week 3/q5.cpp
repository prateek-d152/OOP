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
    cout << "Creating resource1 in main scope." << endl;
    Resource resource1;  

    {
        cout << "Entering nested scope and creating resource2." << endl;
        Resource resource2;  

        cout << "Leaving nested scope." << endl;
    }

    cout << "Back in main scope." << endl;

    return 0;
}

/*
Explanation:

1. `resource1` is created in the main scope. Its constructor is called immediately, and it remains alive until the end of main().
2. Inside the nested scope (a block in main), `resource2` is created. Its constructor is also called when declared.
3. As soon as the nested scope ends, `resource2` is destroyed automatically, so its destructor is called.
4. After that, when main() ends, `resource1` is destroyed, so its destructor is called.

This shows that destructors are automatically called when an object goes out of scope, following the **Last-In-First-Out (LIFO)** order.
*/
