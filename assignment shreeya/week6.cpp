#include <iostream>
using namespace std;

/*
class Parent {
protected:
    int number;

public:
    void setNumber(int n) {
        number = n;
    }
};

class Child : public Parent {
public:
    void showNumber() {
        cout << "Accessed protected number: " << number << endl;
    }
};


class GrandChild: public Child {
    public:
        void AddDisplayNumber(){
            number += 10;
            cout << "Accessed protected number: " << number << endl;
        }
};
int main(){
    Child c;
    c.setNumber(42);    
    c.showNumber();     

    GrandChild d;
    d.setNumber(42);
    d.AddDisplayNumber();

    return 0;
}
*/

//-------2nd class (abstraction) -------------

class Coffee{
    public:
        void startMachine(){
            checkWater();
            startGrind();
            cout << "Coffee is starting" << endl;

        }
        void finalCoffee(){
            brewCoffee();
            cout << "Coffee done!" << endl;
        }

    private:
        void checkWater(){
            cout << "Water hot" << endl;
        }
        void startGrind(){
            cout << "Machine started grinding " << endl;
        }
        void brewCoffee(){
            cout << "Coffee is processing" << endl;
        }
};

int main (){
    Coffee machine1;
    machine1.startMachine();
    machine1.finalCoffee();
}



