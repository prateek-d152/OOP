#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Enter a shape" << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Calculating area of a circle" << endl;
    }
    void calculateArea() {
        cout << "Area of Circle is 3.14 * r * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Calculating area of a rectangle" << endl;
    }
    void calculateArea() {
        cout << "Area of Rectangle is l * b" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Calculating area of a square" << endl;
    }
    void calculateArea() {
        cout << "Area of Square is l * l" << endl;
    }
};

int main() {
    Shape* s;

    Circle cir;
    Rectangle rect;
    Square squ;

    s = &cir;
    s->draw();
    cir.calculateArea();

    s = &rect;
    s->draw();
    rect.calculateArea();

    s = &squ;
    s->draw();
    squ.calculateArea();

    return 0;
}
