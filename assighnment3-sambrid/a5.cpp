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
    
    
    cout << "Entering main function scope" << endl;
    Resource res1;  
    
    {
        cout << "\nEntering nested scope" << endl;
        Resource res2;  
        cout << "Leaving nested scope" << endl;
    }
    
    cout << "\nLeaving main function scope" << endl;
    return 0;
}