#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount("123456789");

    //myAccount.balance = 1000; //This line will cause a compilation error

    /*
    Error Explanation:
    The compiler will throw an error like:
    "‘double BankAccount::balance’ is private within this context"
    This is because `balance` is a private member and cannot be accessed or modified directly from outside the class.
    This demonstrates encapsulation, where access to data is controlled through public methods.
    */

    myAccount.deposit(500);
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200);
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(400); 
    cout << "Current balance: $" << myAccount.getBalance() << endl;

}
