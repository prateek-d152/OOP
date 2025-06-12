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
        double area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }
};

int main() {
    Rectangle r(5.0, 3.0);

    r.getArea();                // Calls Rectangle version
    r.Shape::getArea();         // Explicitly call base class method

    return 0;
}

