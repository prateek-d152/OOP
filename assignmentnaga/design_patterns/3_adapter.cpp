#include <iostream>
using namespace std;

// Target interface
class IPrinter {
public:
    virtual void print() = 0;
};

// Adaptee (legacy class)
class OldPrinter {
public:
    void printOld() {
        cout << "Printing using OldPrinter" << endl;
    }
};

// Adapter class
class PrinterAdapter : public IPrinter {
private:
    OldPrinter oldPrinter;
public:
    void print() override {
        oldPrinter.printOld();  // Adapts to new interface
    }
};

// Usage
int main() {
    PrinterAdapter adapter;
    adapter.print();  
    return 0;
}
