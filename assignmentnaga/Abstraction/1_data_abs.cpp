#include <iostream>
using namespace std;

class Car {
private:
    int speed;  
public:
    void setSpeed(int s) {
        if (s >= 0)
            speed = s;
    }

    int getSpeed() {
        return speed;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(100);               
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;  // Only shows needed info

    return 0;
}
