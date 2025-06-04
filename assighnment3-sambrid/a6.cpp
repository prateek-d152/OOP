#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    // 2. Private attributes
    string accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // 3. Public methods
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrew $" << amount << " successfully." << endl;
            } else {
                cout << "Error: Insufficient balance for withdrawal!" << endl;
            }
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    // 4. Create and use BankAccount object
    BankAccount myAccount("123456789", 500.0);

    // Attempt to directly access balance (will cause compilation error)
    // myAccount.balance = 1000;  
    // COMMENT: This line will not compile because 'balance' is a private member
    // of the BankAccount class. Encapsulation prevents direct access to private
    // members from outside the class. We must use public methods instead.

    // Using public methods to interact with the account
    cout << "Initial balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(200.0);
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(100.0);
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(1000.0);  // This should fail
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    return 0;
}