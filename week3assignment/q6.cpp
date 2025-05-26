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

    
    myAccount.deposit(500);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(400); 

    return 0;
}
