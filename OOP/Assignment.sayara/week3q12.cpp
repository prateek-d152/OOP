#include <iostream>
using namespace std;

class BankAccount {
private:

    string accountNumber;
    double balance;

public:
    
    BankAccount(string accNum, double initialBalance = 0.0) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully." << endl;
        } else {
            cout << "Error: Insufficient balance for withdrawal." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    
    BankAccount myAccount("ACC12345");

  
    myAccount.deposit(500.0);  
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200.0);  
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(400.0);  
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    return 0;
}
