#include "UserManager.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>

UserManager::UserManager() : currentUser(nullptr) {
    users = FileHandler::loadUsers();
    // Create default admin if no users exist
    if (users.empty()) {
        createDefaultAdmin();
    }
}

UserManager::~UserManager() {
    FileHandler::saveUsers(users);
}

void UserManager::createDefaultAdmin() {
    std::string defaultPassword = "Admin@123";
    User admin("admin", PasswordUtils::hashPassword(defaultPassword), "admin");
    users.push_back(admin);
    
    // Also create a default regular user for demonstration
    std::string userPassword = "User@123";
    User regularUser("user", PasswordUtils::hashPassword(userPassword), "user");
    users.push_back(regularUser);
    
    FileHandler::saveUsers(users);
    std::cout << "\n=== DEFAULT ACCOUNTS CREATED ===" << std::endl;
    std::cout << "Default Admin - Username: admin, Password: Admin@123" << std::endl;
    std::cout << "Default User - Username: user, Password: User@123" << std::endl;
    std::cout << "====================================\n" << std::endl;
    Logger::log("Default admin account created");
    Logger::log("Default user account created");
}

bool UserManager::registerUser() {
    std::string username, password, confirmPassword, role;
    int roleChoice;
    
    std::cout << "\n=== USER REGISTRATION ===" << std::endl;
    
    while (true) {
        std::cout << "Enter username(3-8 char): ";
        std::cin >> username;
        
        if (!PasswordUtils::validateUsername(username)) {
            std::cout << "Invalid username format!" << std::endl;
            continue;
        }
        
        if (findUser(username) != nullptr) {
            std::cout << "Username already exists!" << std::endl;
            continue;
        }
        break;
    }
    
    while (true) {
        std::cout << "Enter password (min 8 chars, must include uppercase, lowercase, digit, special char): ";
        std::cin >> password;
        
        if (!PasswordUtils::validatePassword(password)) {
            std::cout << "Password doesn't meet requirements!" << std::endl;
            continue;
        }
        
        std::cout << "Confirm password: ";
        std::cin >> confirmPassword;
        
        if (password != confirmPassword) {
            std::cout << "Passwords don't match!" << std::endl;
            continue;
        }
        break;
    }
    
    // Role selection
    while (true) {
        std::cout << "\nSelect user role:" << std::endl;
        std::cout << "1. Regular User" << std::endl;
        std::cout << "2. Administrator" << std::endl;
        std::cout << "Enter choice (1-2): ";
        std::cin >> roleChoice;
        
        if (roleChoice == 1) {
            role = "user";
            break;
        } else if (roleChoice == 2) {
            role = "admin";
            std::cout << "Note: Admin accounts have full system access!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice! Please select 1 or 2." << std::endl;
        }
    }
    
    User newUser(username, PasswordUtils::hashPassword(password), role);
    users.push_back(newUser);
    FileHandler::saveUsers(users);
    
    std::cout << "Registration successful! User created with role: " << role << std::endl;
    Logger::log("User registered successfully with role: " + role, username);
    return true;
}

bool UserManager::loginUser() {
    std::string username, password;
    
    std::cout << "\n=== USER LOGIN ===" << std::endl;
    std::cout << "Username: ";
    std::cin >> username;
    
    User* user = findUser(username);
    if (user == nullptr) {
        std::cout << "User not found!" << std::endl;
        Logger::log("Login attempt - user not found", username);
        return false;
    }
    
    if (user->isLocked) {
        std::cout << "Account is locked due to multiple failed attempts!" << std::endl;
        Logger::log("Login attempt on locked account", username);
        return false;
    }
    
    std::cout << "Password: ";
    std::cin >> password;
    
    if (user->passwordHash == PasswordUtils::hashPassword(password)) {
        user->failedAttempts = 0;
        currentUser = user;
        std::cout << "Login successful! Welcome, " << username << std::endl;
        Logger::log("Successful login", username);
        FileHandler::saveUsers(users);
        return true;
    } else {
        user->failedAttempts++;
        if (user->failedAttempts >= 3) {
            user->isLocked = true;
            std::cout << "Account locked due to 3 failed attempts!" << std::endl;
            Logger::log("Account locked - too many failed attempts", username);
        } else {
            std::cout << "Invalid password! Attempts remaining: " << (3 - user->failedAttempts) << std::endl;
            Logger::log("Failed login attempt", username);
        }
        FileHandler::saveUsers(users);
        return false;
    }
}

void UserManager::showDashboard() {
    if (currentUser == nullptr) return;
    
    std::cout << "\n=== DASHBOARD ===" << std::endl;
    std::cout << "Welcome, " << currentUser->username << " (" << currentUser->role << ")" << std::endl;
    std::cout << "Account created: " << currentUser->createdDate << std::endl;
    
    if (currentUser->role == "admin") {
        showAdminMenu();
    } else {
        showUserMenu();
    }
}

void UserManager::showAdminMenu() {
    int choice;
    while (true) {
        std::cout << "\n=== ADMIN MENU ===" << std::endl;
        std::cout << "1. View All Users" << std::endl;
        std::cout << "2. Delete User Account" << std::endl;
        std::cout << "3. Reset User Password" << std::endl;
        std::cout << "4. Unlock User Account" << std::endl;
        std::cout << "5. Change My Password" << std::endl;
        std::cout << "6. View Audit Logs" << std::endl;
        std::cout << "7. Logout" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1: viewAllUsers(); break;
            case 2: deleteUserAccount(); break;
            case 3: resetUserPassword(); break;
            case 4: unlockUserAccount(); break;
            case 5: changePassword(); break;
            case 6: viewAuditLogs(); break;
            case 7: logout(); return;
            default: std::cout << "Invalid choice!" << std::endl;
        }
    }
}

void UserManager::showUserMenu() {
    int choice;
    while (true) {
        std::cout << "\n=== USER DASHBOARD ===" << std::endl;
        std::cout << "Welcome to your personal dashboard!" << std::endl;
        std::cout << "\n=== USER MENU ===" << std::endl;
        std::cout << "1. View My Profile" << std::endl;
        std::cout << "2. Change My Password" << std::endl;
        std::cout << "4. System Information" << std::endl;
        std::cout << "5. Logout" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1: viewProfile(); break;
            case 2: changePassword(); break;
            case 3: showSystemInfo(); break;
            case 4: logout(); return;
            default: std::cout << "Invalid choice!" << std::endl;
        }
    }
}

void UserManager::viewAllUsers() {
    std::cout << "\n=== ALL USERS ===" << std::endl;
    std::cout << std::left << std::setw(15) << "Username" 
              << std::setw(10) << "Role" 
              << std::setw(10) << "Status" 
              << std::setw(10) << "Failed" 
              << "Created" << std::endl;
    std::cout << std::string(70, '-') << std::endl;
    
    for (const auto& user : users) {
        std::cout << std::left << std::setw(15) << user.username
                  << std::setw(10) << user.role
                  << std::setw(10) << (user.isLocked ? "LOCKED" : "ACTIVE")
                  << std::setw(10) << user.failedAttempts
                  << user.createdDate << std::endl;
    }
}

void UserManager::deleteUserAccount() {
    std::string username;
        std::cout << "Enter username to delete: ";
        std::cin >> username;
        
        if (username == currentUser->username) {
            std::cout << "Cannot delete your own account!" << std::endl;
            return;
        }
        
        auto it = std::find_if(users.begin(), users.end(),
                              [&username](const User& u) { return u.username == username; });
        
        if (it != users.end()) {
            users.erase(it);
            FileHandler::saveUsers(users);
            std::cout << "User account deleted successfully!" << std::endl;
            Logger::log("Admin deleted user account", username);
        } else {
            std::cout << "User not found!" << std::endl;
        }
}
    
User* UserManager::findUser(const std::string& username) {
    for (auto& user : users) {
        if (user.username == username) {
            return &user;
        }
    }
    return nullptr;
}

void UserManager::resetUserPassword() {
    std::string username, newPassword;
        std::cout << "Enter username: ";
        std::cin >> username;
        
        User* user = findUser(username);
        if (user == nullptr) {
            std::cout << "User not found!" << std::endl;
            return;
        }
        
        while (true) {
            std::cout << "Enter new password: ";
            std::cin >> newPassword;
            
            if (PasswordUtils::validatePassword(newPassword)) {
                user->passwordHash = PasswordUtils::hashPassword(newPassword);
                user->failedAttempts = 0;
                user->isLocked = false;
                FileHandler::saveUsers(users);
                std::cout << "Password reset successfully!" << std::endl;
                Logger::log("Admin reset password for user", username);
                break;
            } else {
                std::cout << "Password doesn't meet requirements!" << std::endl;
            }
        }
}

void UserManager::unlockUserAccount() {
    std::string username;
        std::cout << "Enter username to unlock: ";
        std::cin >> username;
        
        User* user = findUser(username);
        if (user == nullptr) {
            std::cout << "User not found!" << std::endl;
            return;
        }
        
        user->isLocked = false;
        user->failedAttempts = 0;
        FileHandler::saveUsers(users);
        std::cout << "Account unlocked successfully!" << std::endl;
        Logger::log("Admin unlocked user account", username);
}

void UserManager::changePassword() {
   std::string currentPassword, newPassword, confirmPassword;
        
        std::cout << "Enter current password: ";
        std::cin >> currentPassword;
        
        if (currentUser->passwordHash != PasswordUtils::hashPassword(currentPassword)) {
            std::cout << "Invalid current password!" << std::endl;
            return;
        }
        
        while (true) {
            std::cout << "Enter new password: ";
            std::cin >> newPassword;
            
            if (!PasswordUtils::validatePassword(newPassword)) {
                std::cout << "Password doesn't meet requirements!" << std::endl;
                continue;
            }
            
            std::cout << "Confirm new password: ";
            std::cin >> confirmPassword;
            
            if (newPassword != confirmPassword) {
                std::cout << "Passwords don't match!" << std::endl;
                continue;
            }
            break;
        }
        
        currentUser->passwordHash = PasswordUtils::hashPassword(newPassword);
        FileHandler::saveUsers(users);
        std::cout << "Password changed successfully!" << std::endl;
        Logger::log("User changed password", currentUser->username);
}

void UserManager::viewAuditLogs() {
    std::cout << "\n=== AUDIT LOGS ===" << std::endl;
        std::ifstream logFile("logs.txt");
        std::string line;
        int count = 0;
        
        while (std::getline(logFile, line) && count < 20) { // Show last 20 entries
            std::cout << line << std::endl;
            count++;
        }
        logFile.close();
        
        if (count == 0) {
            std::cout << "No logs available." << std::endl;
        }
}

void UserManager::viewProfile() {
        std::cout << "\n=== PROFILE ===" << std::endl;
        std::cout << "Username: " << currentUser->username << std::endl;
        std::cout << "Role: " << currentUser->role << std::endl;
        std::cout << "Account Status: " << (currentUser->isLocked ? "LOCKED" : "ACTIVE") << std::endl;
        std::cout << "Failed Attempts: " << currentUser->failedAttempts << std::endl;
        std::cout << "Created: " << currentUser->createdDate << std::endl;
}

void UserManager::showSystemInfo() {
    std::cout << "System info: Placeholder system v1.0\n";
}

void UserManager::logout() {
    std::cout << "Logging out " << currentUser->username << std::endl;
    currentUser = nullptr;
}
