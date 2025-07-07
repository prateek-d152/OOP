#include "UserManager.h"
#include <iostream>

// Main application class
class LoginSystem {
private:
    UserManager userManager;
    
public:
    void run() {
        std::cout << "=== SECURE LOGIN AND REGISTRATION SYSTEM ===" << std::endl;
        Logger::log("System started");
        
        int choice;
        while (true) {
            std::cout << "\n=== MAIN MENU ===" << std::endl;
            std::cout << "1. Register New User" << std::endl;
            std::cout << "2. Login" << std::endl;
            std::cout << "3. Exit" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> choice;
            
            switch (choice) {
                case 1:
                    userManager.registerUser();
                    break;
                case 2:
                    if (userManager.loginUser()) {
                        userManager.showDashboard();
                    }
                    break;
                case 3:
                    std::cout << "Thank you for using the system!" << std::endl;
                    Logger::log("System shutdown");
                    return;
                default:
                    std::cout << "Invalid choice! Please try again." << std::endl;
            }
        }
    }
};

int main() {
    LoginSystem system;
    system.run();
    return 0;
}