#include <iostream>

class BankAccount {
public:
    double balance;

    BankAccount(double bal) : balance(bal) {}

    void transfer(double amount, bool &status) {
        if (amount <= balance) {
            balance -= amount; 
            status = true;     
        } else {
            status = false;    
        }
    }
};

int main() {
    BankAccount acc(2000.0);
    bool success;
    acc.transfer(1000.0, success);  

    std::cout << "Transfer success: " << (success ? "Yes" : "No") << std::endl;
    std::cout << "Remaining balance: " << acc.balance << std::endl;

    return 0;
}
