#include <iostream>
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

    void displayInfo() {
        cout << "Product Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    Product defaultProduct;
    Product singleProduct("Laptop", 999.99);
    Product multipleProduct("Phone", 699.99, 5);

    cout << "Default Product:" << endl;
    defaultProduct.displayInfo();

    cout << "\nSingle Product:" << endl;
    singleProduct.displayInfo();

    cout << "\nMultiple Product:" << endl;
    multipleProduct.displayInfo();

    return 0;
}
