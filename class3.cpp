#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function to allow polymorphism
    virtual void calculateArea() {
        cout << "Area of shape is undefined." << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculateArea() override {
        float area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void calculateArea() override {
        float area = M_PI * radius * radius;
        cout << "Circle Area: " << area << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}

    void calculateArea() override {
        float area = 0.5 * base * height;
        cout << "Triangle Area: " << area << endl;
    }
};

int main() {
    Shape* shape;

    Rectangle rect(10, 5);
    Circle circ(7);
    Triangle tri(6, 4);

    shape = &rect;
    shape->calculateArea();

    shape = &circ;
    shape->calculateArea();

    shape = &tri;
    shape->calculateArea();

    return 0;
}
