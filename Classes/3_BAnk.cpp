#include <iostream>
using namespace std;

// Simplified BankAccount class
class BankAccount {
public:
    double balance;  

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Insufficient funds or invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    BankAccount account;

    account.balance = 0;

    account.deposit(500);
    account.withdraw(200);  
    account.deposit(300);   
    account.withdraw(100);

    cout << "Final Balance: " << account.balance << endl;

    return 0;
}
