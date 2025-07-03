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
    Rectangle(double l, double w) : length(l), width(w) {}

    void getArea() {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    rect.getArea();

    rect.Shape::getArea();

    return 0;
}
