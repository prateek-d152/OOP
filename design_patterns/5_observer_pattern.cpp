#include <iostream>
#include <vector>
using namespace std;

// Observer interface
class IObserver {
public:
    virtual void update(int temperature) = 0;
};

// Subject class
class WeatherStation {
private:
    vector<IObserver*> observers;
    int temperature;
public:
    void addObserver(IObserver& observer) {
        observers.push_back(&observer);
    }

    void setTemperature(int temp) {
        temperature = temp;
        notifyObservers();
    }

    void notifyObservers() {
        for (IObserver* obs : observers) {
            obs->update(temperature);
        }
    }
};

// Concrete observers
class PhoneDisplay : public IObserver {
public:
    void update(int temperature) override {
        cout << "Phone Display: Temp is " << temperature << "°C\n";
    }
};

class WindowDisplay : public IObserver {
public:
    void update(int temperature) override {
        cout << "Window Display: Temp is " << temperature << "°C\n";
    }
};

// Usage
int main() {
    WeatherStation station;
    PhoneDisplay phone;
    WindowDisplay window;

    station.addObserver(phone);
    station.addObserver(window);

    station.setTemperature(25);
    return 0;
}
