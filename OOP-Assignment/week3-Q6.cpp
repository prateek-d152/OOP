#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    // myAccount.balance = 1000; // Error: 'balance' is private
    // Uncommenting the above line causes compilation failure
    // because private members cannot be accessed directly outside the class

    myAccount.deposit(500);
    cout << "After deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "After withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(400); // Should print error
    cout << "Final balance: $" << myAccount.getBalance() << endl;

    return 0;
}
