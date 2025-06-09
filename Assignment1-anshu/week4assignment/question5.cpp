#include <iostream>
using namespace std;

class Shape {
public:
    void getArea() {
        cout << "Calculating area..." << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void getArea() {
        cout << "Area of Rectangle: " << (length * width) << endl;
    }
};

int main() {
    Rectangle r(5.0, 3.0);
    r.getArea(); // Calls overridden version

    r.Shape::getArea(); // Calls base class version

    return 0;
}
