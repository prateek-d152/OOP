#ifndef bank_h
#define bank_h
#include "account.h"
#include <iostream>
using namespace std;

class Bank {
public:
    string name, branch, contactNum;

    Bank(string _name, string _branch, string _contactNum) {
        name = _name;
        branch = _branch;
        contactNum = _contactNum;
    }

    Account openAccount(string accHoldersName) {
        return Account(accHoldersName, name);
    }
};

#endif