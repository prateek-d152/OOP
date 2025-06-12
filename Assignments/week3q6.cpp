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
        if (balance >= amount)
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

    // myAccount.balance = 1000; // ❌ Error: 'balance' is private
    // This line causes a compilation error because private members cannot be accessed directly.

    myAccount.deposit(1000);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    return 0;
}
