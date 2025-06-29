#include <iostream>
using namespace std;

/*int calculateSum(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    int result = calculateSum(10);
    cout << "Sum from 1 to 10: " << result << endl;

    return 0;
}*/

//----------2nd---------------------------------------------------------------------------------
/*void incrementByValue(int x) {
    x += 5;  
}

void incrementByReference(int &x) {
    x += 5;  
}

int main() {
    int num = 10;

    incrementByValue(num);
    cout << "After incrementByValue: " << num << endl;  

    incrementByReference(num);
    cout << "After incrementByReference: " << num << endl;  

    return 0;
}*/

//---------3rd----------------------------------------------------------------------------
/*class Book {
public:
    string title;
    string author;
    int publicationYear;

    void displayBookDetails() {
        cout << "Title: " << title << ", Author: " << author
             << ", Year: " << publicationYear << endl;
    }
};

int main() {
    Book book1, book2;

    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.publicationYear = 1925;

    book2.title = "1984";
    book2.author = "George Orwell";
    book2.publicationYear = 1949;

    book1.displayBookDetails();
    book2.displayBookDetails();

    return 0;
}*/

//---------------4th-----------------------------------------------------------------------
/*class Product {
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
        cout << "Name: " << name << ", Price: $" << price
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Product p1;
    Product p2("Pen", 1.5);
    Product p3("Notebook", 3.0, 5);

    p1.displayProduct();
    p2.displayProduct();
    p3.displayProduct();

    return 0;
}*/

//------------------5th---------------------------------------------------------------------------
/*class Resource {
public:
    Resource() {
        cout << "Resource acquired!" << endl;
    }

    ~Resource() {
        cout << "Resource released!" << endl;
    }
};

int main() {
    Resource r1;

    {
        Resource r2; 
    }
    return 0;
}*/

//-----------------6th------------------------------------------------------------------------
/* class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = "0000";
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(500);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(500); 

    return 0;
} */

//---------------------7th------------------------------------------------------------------------------------
/* void printData(int i) {
    cout << "Integer: " << i << endl;
}

void printData(double f) {
    cout << "Double: " << f << endl;
}

void printData(string s) {
    cout << "String: " << s << endl;
}

int main() {
    printData(10);
    printData(3.14);
    printData("Hello, C++!");

    return 0;
} */

//------------------8th------------------------------------------------------------------------------------
class Profile {
private:
    string name;
    int age;
    string city;

public:
    Profile() {
        name = "Unknown";
        age = 0;
        city = "Not Set";
    }

    Profile(string n) {
        name = n;
        age = 18;
        city = "Unknown";
    }

    Profile(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    void displayProfile() {
        cout << "Name: " << name << ", Age: " << age
             << ", City: " << city << endl;
    }
};

int main() {
    Profile p1;
    Profile p2("Alice");
    Profile p3("Bob", 25, "Kathmandu");

    p1.displayProfile();
    p2.displayProfile();
    p3.displayProfile();

    return 0;
}








