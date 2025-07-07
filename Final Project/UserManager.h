#ifndef USERMANAGER_H
#define USERMANAGER_H

#include "User.h"
#include "Logger.h"
#include "FileHandler.h"
#include "PasswordUtils.h"
#include <vector>

// Main User Manager class
class UserManager {
private:
    std::vector<User> users;
    User* currentUser;
    
    User* findUser(const std::string& username);
    void createDefaultAdmin();
    
public:
    UserManager();
    ~UserManager();
    
    // Authentication methods
    bool registerUser();
    bool loginUser();
    void logout();
    
    // Dashboard methods
    void showDashboard();
    void showAdminMenu();
    void showUserMenu();
    
    // Admin methods
    void viewAllUsers();
    void deleteUserAccount();
    void resetUserPassword();
    void unlockUserAccount();
    void viewAuditLogs();
    
    // User methods
    void viewProfile();
    void changePassword();
    void showSystemInfo();
};

#endif // USERMANAGER_H