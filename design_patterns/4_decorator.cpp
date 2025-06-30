#include <iostream>
using namespace std;

// Component interface
class VisualComponent {
public:
    virtual void draw() = 0;
};

// Concrete component
class TextView : public VisualComponent {
public:
    void draw() override {
        cout << "Drawing TextView" << endl;
    }
};

// Decorator base class
class Decorator : public VisualComponent {
protected:
    VisualComponent& component;
public:
    Decorator(VisualComponent& c) : component(c) {}
    void draw() override {
        component.draw();  // Delegate base behavior
    }
};

// Concrete decorator
class BorderDecorator : public Decorator {
public:
    BorderDecorator(VisualComponent& c) : Decorator(c) {}
    void draw() override {
        Decorator::draw();
        cout << "Adding border" << endl;
    }
};

// Usage
int main() {
    TextView text;
    BorderDecorator borderedText(text);
    borderedText.draw();
    return 0;
}
