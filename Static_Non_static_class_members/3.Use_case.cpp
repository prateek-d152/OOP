#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;
    static float interestRate;  // Static member shared by all accounts
    static int accountCount;    // To count number of accounts created

public:
    // Constructor
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
        accountCount++;  // increment for each new object
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }

    static void showAccountCount() {
        cout << "Total Accounts Created: " << accountCount << endl;
    }
};

float BankAccount::interestRate = 3.5;
int BankAccount::accountCount = 0;

int main() {
    BankAccount acc1("Alice", 5000);
    BankAccount acc2("Bob", 3000);
    BankAccount acc3("Rajesh", 300000);


    acc1.display();
    acc2.display();
    acc3.display();

    BankAccount::showAccountCount();  

    return 0;
}



