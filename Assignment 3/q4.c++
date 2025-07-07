#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
    int quantity;

public:
    Product() {
        name = "Unknown";
        price = 0.0;
        quantity = 0;
    }

    Product(string n, double p) {
        name = n;
        price = p;
        quantity = 1;
    }

    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    void displayProduct() {
        cout << "Name: " << name << ", Price: $" << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Product p1;
    Product p2("Laptop", 800.00);
    Product p3("Phone", 500.00, 3);

    p1.displayProduct();
    p2.displayProduct();
    p3.displayProduct();

    return 0;
}
