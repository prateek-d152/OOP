#ifndef customer_h
#define customer_h
#include <iostream>
#include <string>
using namespace std;

#include <iostream>

class Customer {
private:
    string name, contactNumber, address, dateOfBirth;

public:
    string getName() {
        return name;
    }

    void inputCustomerDetails() {
        cout << "Enter your full name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter contact number: ";
        getline(cin, contactNumber);

        cout << "Enter address: ";
        getline(cin, address);

        cout << "Enter date of birth in yyyy-mm-dd format: ";
        getline(cin, dateOfBirth);
    }

    Customer(string _name, string _contactNumber, string _address, string _dateOfBirth) {
        name = _name;
        contactNumber = _contactNumber;
        address = _address;
        dateOfBirth = _dateOfBirth;
    }

    Customer() {
        name = "";
        contactNumber = "";
        address = "";
        dateOfBirth = "";
    }
};

#endif