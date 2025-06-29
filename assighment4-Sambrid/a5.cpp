#include <iostream>


class Shape {
public:
    
    void getArea() {
        std::cout << "Calculating area..." << std::endl;
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
        std::cout << "Area of rectangle: " << area << std::endl;
    }
};

int main() {
    
    Rectangle rect(5.0, 3.5);

    
    rect.getArea();

    
    rect.Shape::getArea();

    return 0;
}
