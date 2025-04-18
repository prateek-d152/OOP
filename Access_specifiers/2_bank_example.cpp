#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

protected:
    string accountNumber;

public:
    string accountHolder;

    void setAccountDetails(string holder, string accNum, double initialDeposit) {
        accountHolder = holder;
        accountNumber = accNum;
        balance = initialDeposit;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.setAccountDetails("John Doe", "ACC123", 1000.0);

    acc.deposit(500.0);
    acc.withdraw(200.0);
    acc.showBalance();

    // Accessing public member — ALLOWED
    cout << "Account Holder: " << acc.accountHolder << endl;

    // Accessing protected member — NOT ALLOWED (compiler error)
    // cout << "Account Number: " << acc.accountNumber << endl; 

    // Accessing private member — NOT ALLOWED (compiler error)
    // cout << "Balance: " << acc.balance << endl;

    

    return 0;
}
