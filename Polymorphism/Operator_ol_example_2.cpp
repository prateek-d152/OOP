#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;

    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator + (Time t) {
        Time result;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes = result.minutes % 60;
        return result;
    }

    void display() {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
    Time t1(4, 35);
    Time t2(6, 30);

    Time total = t1 + t2;

    cout << "Total Time: " <<endl;
    total.display();  

    int a = 2;
    int b = 4;
    cout << a+b <<endl; 

    return 0;
}
