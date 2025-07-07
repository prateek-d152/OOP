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
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.getArea();              // overridden method
    rect.Shape::getArea();       // base class version

    return 0;
}
