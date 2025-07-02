#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount() {
        accountNumber = "123456";
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance.\n";
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount;
    
    myAccount.deposit(500);
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    myAccount.withdraw(500); // Will trigger insufficient balance

    return 0;
}
