#include <iostream>
using namespace std;
class Shape {
public:
    void calculateArea() {
        cout << "This is the base shape. No specific area calculated." << endl;
    }
};

class Rectangle : public Shape {
public:
    void calculateArea() {
        int length = 5;
        int width = 4;
        int area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }
};

class Circle : public Shape {
public:
    void calculateArea() {
        double radius = 3.0;
        double area = 3.1416 * radius * radius;
        cout << "Circle Area: " << area << endl;
    }
};
class Triangle : public Shape {
public:
    void calculateArea() {
        double base = 6.0;
        double height = 2.0;
        double area = 0.5 * base * height;
        cout << "Triangle Area: " << area << endl;
    }
};
int main() {
    Shape shape;
    Rectangle rect;
    Circle circ;
    Triangle tri;
    shape.calculateArea();
    rect.calculateArea();
    circ.calculateArea();
    tri.calculateArea();
    return 0;
}
