#ifndef CAR_H
#define CAR_H

// Defining constants for speed limits within Car.h
const int MAX_SPEED = 200;
const int MIN_SPEED = 0;

class Car {
private:
    int speed;

public:
    Car(int s = MIN_SPEED) : speed(s) {}

    void setSpeed(int s) {
        if (s >= MIN_SPEED && s <= MAX_SPEED) {
            speed = s;
        }
    }

    int getSpeed() const {
        return speed;
    }
};

#endif
