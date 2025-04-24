#include <iostream>
using namespace std;

class car{
    public:
        static int totalcars;
        string carModel; int carID;
        
       car(string a, int b){
        carModel=a;
        carID = b;
        totalcars++;
        }
    };

   
    int car::totalcars = 0;
    
    int main() {
        car c1("mahendra", 23);
        car c2("BYD", 7);
        cout << "Total car: " << car::totalcars << endl;
    }