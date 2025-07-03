#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Error: Insufficient balance." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount("ACC12345", 500.00);

   
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(200); 
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(100);  
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(1000);  

    return 0;
}
