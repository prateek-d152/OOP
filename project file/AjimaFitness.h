#ifndef AJIMA_FITNESS_H
#define AJIMA_FITNESS_H

#include <string>
struct Member {
    std::string name;
    std::string month;
    double amount;
};
void addMemberRecord();
void displayMemberRecords();
void deleteMemberRecord();
void searchMemberRecord();

#endif 
