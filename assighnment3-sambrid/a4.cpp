#include <iostream>
#include <string>

using namespace std;


class Product {
private:
   
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
        cout << "Product Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    Product product1;
    
    
    Product product2("Smartphone", 599.99);
    
    
    Product product3("Laptop", 1299.99, 5);


    product1.displayProduct();
    product2.displayProduct();
    product3.displayProduct();

    return 0;
}