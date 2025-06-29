#include <iostream>
using namespace std;

/*class Book {
private:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book myBook("Born forever", "Shreeya Malla");
    myBook.display();
    return 0;
}*/


/*class Vehicle {
public:
    void startEngine() {
        cout << "Vehicle engine started." << endl;
    }
};

class Car : public Vehicle {
public:
    void playMusic() {
        cout << "Car is playing music." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine();  
    myCar.playMusic();    
    return 0;
}*/


/*class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of integers: " << calc.add(5, 3) << endl;
    cout << "Sum of floats: " << calc.add(2.5f, 3.7f) << endl;

    return 0;
}*/

/*class Shape {
public:
    virtual void draw() {  // Virtual function for polymorphism
        cout << "Drawing a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Shape();
    shapes[1] = new Circle();
    shapes[2] = new Rectangle();

    for (int i = 0; i < 3; i++) {
        shapes[i]->draw();  
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}*/


class CoffeeMachine {
public:
    void serve() {
        cout << "Serving coffee..." << endl;
        brew();  
    }

private:
    void brew() {
        cout << "Brewing coffee..." << endl;
    }
};

int main() {
    CoffeeMachine machine;

    machine.serve();   
    return 0;
}

