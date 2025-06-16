#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle\n";
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing Square\n";
    }
};

Shape& createShape(const string& type) {
    static Circle circle;
    static Square square;

    if (type == "circle") return circle;
    if (type == "square") return square;

    throw invalid_argument("Unknown shape type");
}

int main() {
    Shape& shape1 = createShape("circle");
    Shape& shape2 = createShape("square");

    shape1.draw();  
    shape2.draw();  

    return 0;
}
