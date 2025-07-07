#ifndef USER_H
#define USER_H

#include <string>

// User structure
struct User {
    std::string username;
    std::string passwordHash;
    std::string role; // "admin" or "user"
    int failedAttempts;
    bool isLocked;
    std::string createdDate;
    
    User();
    User(const std::string& user, const std::string& pass, const std::string& r = "user");
};

#endif // USER_H