#ifndef account_h
#define account_h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

class Account {
private:
    string accountHoldersName;
    float balance;
    int accNumber;
    string bankName;
    int pin;

public:
    void balanceEnquiry() {
        int _accNumber;
        int _pin;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if (_accNumber == accNumber && _pin == pin) {
            cout << "Your current balance is: " << balance << endl;
        } else {
            cout << "Invalid input." << endl;
        }
    }

    int getAccNumber() {
        return accNumber;
    }

    int getPin() {
        return pin;
    }

    string getHolderName() {
        return accountHoldersName;
    }

    Account(string _name, string _bankName) {
        accountHoldersName = _name;
        accNumber = rand() % 1000000000 + 1000000000;
        balance = 0.0;
        pin = rand() % 9000 + 1000;
        bankName = _bankName;
    }

    Account() {
        accountHoldersName = "";
        accNumber = 0;
        balance = 0.0;
        pin = 0;
        bankName = "";
    }

    void deposit() {
        int _accNumber;
        int _pin;
        float amount;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if (_accNumber == accNumber && _pin == pin) {
            cout << "Enter the amount to deposit: ";
            cin >> amount;

            balance += amount;
            cout << "Deposit successful. Current balance: " << balance << endl;
        } else {
            cout << "Invalid input." << endl;
        }
    }

    void withdraw() {
        int _accNumber;
        int _pin;
        float amount;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN: ";
        cin >> _pin;

        if (_accNumber == accNumber && _pin == pin) {
            cout << "Enter the amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. Current balance: " << balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        } else {
            cout << "Invalid input." << endl;
        }
    }

    void closeAccount() {
        int _accNumber;
        int _pin;
        cout << "Enter your accNumber: ";
        cin >> _accNumber;
        cout << "Enter your PIN to close the account: ";
        cin >> _pin;

        if (_accNumber == accNumber && _pin == pin) {
            balance = 0.0;
            cout << "Account closed successfully." << endl;
        } else {
            cout << "Invalid Input." << endl;
        }
    }

    void saveToFile() {
        ofstream outFile;
        outFile.open("account_data.txt", ios::app);
        if (outFile.is_open()) {
            outFile << "AccountHolder: " << accountHoldersName << endl;
            outFile << "AccountNumber: " << accNumber << endl;
            outFile << "BankName: " << bankName << endl;
            outFile << "PIN: " << pin << endl;
            outFile << "Balance: " << balance << endl;
            outFile << "--------------------------" << endl;
            outFile.close();
        } else {
            cout << "Unable to open file for saving account data." << endl;
        }
    }
};

#endif