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
        if (balance >= amount) {
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

    // myAccount.balance = 1000; ❌ This line will cause a compile error because balance is private.

    myAccount.deposit(1000);
    cout << "After deposit: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "After withdrawal: " << myAccount.getBalance() << endl;

    myAccount.withdraw(1000); // Should show error due to insufficient balance

    return 0;
}
