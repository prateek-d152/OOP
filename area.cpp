#include <iostream>
#include <cmath> // for M_PI

// Base class
class Shape {
public:
    // Virtual function to calculate area
    virtual double calculateArea() const = 0; // 
Pure virtual function

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class for Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calculateArea() const override {
        return side * side;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), 
width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create objects with example values
    Square square(5.0);
    Rectangle rectangle(4.0, 6.0);
    Circle circle(3.0);

    // Calculate and display area for each
    std::cout << "Area of Square: " << 
square.calculateArea() << std::endl;
    std::cout << "Area of Rectangle: " << 
rectangle.calculateArea() << std::endl;
    std::cout << "Area of Circle: " << 
circle.calculateArea() << std::endl;

    return 0;
}

