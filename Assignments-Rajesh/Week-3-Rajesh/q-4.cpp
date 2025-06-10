#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

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
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Product product1;
    
    Product product2("Laptop", 999.99);
    
    Product product3("Phone", 499.50, 3);

    cout << "Product 1 Details:\n";
    product1.displayProduct();

    cout << "Product 2 Details:\n";
    product2.displayProduct();

    cout << "Product 3 Details:\n";
    product3.displayProduct();

}
