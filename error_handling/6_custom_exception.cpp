#include <iostream>
using namespace std;
class MyException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "ERROR ! USER ENTERED AN EVEN NUMBER";
        }
    };
    
    int main() {

        try {
            int a ;
            cout <<"Enter an odd number: ";
            cin >>a;
            if (a % 2 == 0) {
                throw MyException();
            }
            cout << "Finally You entered an odd number: " << a << endl;
            
        } catch (const MyException& e) {
            cout << e.what();
        }
    }
    