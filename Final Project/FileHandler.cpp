#include "FileHandler.h"
#include <fstream>
#include <sstream>

void FileHandler::saveUsers(const std::vector<User>& users) {
    std::ofstream file("users.txt");
    if (file.is_open()) {
        for (const auto& user : users) {
            file << user.username << "|" << user.passwordHash << "|" 
                 << user.role << "|" << user.failedAttempts << "|" 
                 << user.isLocked << "|" << user.createdDate << std::endl;
        }
        file.close();
    }
}

std::vector<User> FileHandler::loadUsers() {
    std::vector<User> users;
    std::ifstream file("users.txt");
    std::string line;
    
    while (std::getline(file, line)) {
        if (line.empty()) continue;
        
        std::istringstream ss(line);
        std::string token;
        std::vector<std::string> tokens;
        
        while (std::getline(ss, token, '|')) {
            tokens.push_back(token);
        }
        
        if (tokens.size() >= 6) {
            User user;
            user.username = tokens[0];
            user.passwordHash = tokens[1];
            user.role = tokens[2];
            user.failedAttempts = std::stoi(tokens[3]);
            user.isLocked = (tokens[4] == "1");
            user.createdDate = tokens[5];
            users.push_back(user);
        }
    }
    file.close();
    return users;
}