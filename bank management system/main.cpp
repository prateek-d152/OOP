#include <iostream>
#include <cstdlib>
#include <ctime>
#include "account.h"
#include "bank.h"
#include "customer.h"

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator once

    Bank Nabil("Nabil Bank", "Baneswar", "01-123456");
    Customer customer;
    Account customerAccount;
    bool accountCreated = false;

    int choice;

    do {
        cout << "\n      Welcome to " << Nabil.name << endl
             << "      Branch: " << Nabil.branch << endl
             << "      Contact Number: " << Nabil.contactNum << endl;
        cout << "\n\tSelect one option below:";
        cout << "\n\t1. Open an Account";
        cout << "\n\t2. Balance Enquiry";
        cout << "\n\t3. Deposit";
        cout << "\n\t4. Withdrawal";
        cout << "\n\t5. Close an Account";
        cout << "\n\t6. Quit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                customer.inputCustomerDetails();
                customerAccount = Nabil.openAccount(customer.getName());
                accountCreated = true;
                customerAccount.saveToFile();

                cout << "Congratulations, " << customer.getName() << "! Your account has been successfully created." << endl;
                cout << "Account Number: " << customerAccount.getAccNumber() << endl;
                cout << "PIN: " << customerAccount.getPin() << endl;
                break;

            case 2:
                if (accountCreated)
                    customerAccount.balanceEnquiry();
                else
                    cout << "No account exists. Please open an account first." << endl;
                break;

            case 3:
                if (accountCreated) {
                    customerAccount.deposit();
                    customerAccount.saveToFile();
                } else
                    cout << "No account exists. Please open an account first." << endl;
                break;

            case 4:
                if (accountCreated) {
                    customerAccount.withdraw();
                    customerAccount.saveToFile();
                } else
                    cout << "No account exists. Please open an account first." << endl;
                break;

            case 5:
                if (accountCreated) {
                    customerAccount.closeAccount();
                    customerAccount.saveToFile();
                    accountCreated = false;
                } else {
                    cout << "No account to close." << endl;
                }
                break;

            case 6:
                cout << "Thank you for visiting us." << endl;
                break;

            default:
                cout << "Invalid input. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}