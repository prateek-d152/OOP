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
        if (amount <= balance)
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

  

    myAccount.deposit(500);
    cout << "After deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "After withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(500); 
    return 0;
}
