#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getArea() {  // Make it virtual to enable overriding
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

    void getArea() override {  // Override base class method
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    rect.Shape::getArea();    // Calls base class method explicitly
    rect.getArea();           // Calls Rectangle's overridden method

    return 0;
}
