#include <iostream>
#include <stdexcept>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        if (l <= 0 || w <= 0) {
            throw invalid_argument("Length and width must be positive!");
        }
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    try {
        Rectangle r(-5, 10);  
        cout << "Area: " << r.area() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
