#include "PasswordUtils.h"
#include "SHA256.h"

bool PasswordUtils::validatePassword(const std::string& password) {
    if (password.length() < 8) return false;
    
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    
    for (char c : password) {
        if (c >= 'A' && c <= 'Z') hasUpper = true;
        else if (c >= 'a' && c <= 'z') hasLower = true;
        else if (c >= '0' && c <= '9') hasDigit = true;
        else if (c == '!' || c == '@' || c == '#' || c == '$' || 
                 c == '%' || c == '^' || c == '&' || c == '*') hasSpecial = true;
    }
    
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

bool PasswordUtils::validateUsername(const std::string& username) {
    if (username.length() < 3 || username.length() > 10) return false;
    
    for (char c : username) {
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
              (c >= '0' && c <= '9') || c == '_')) {
            return false;
        }
    }
    return true;
}

std::string PasswordUtils::hashPassword(const std::string& password) {
    return SHA256::hash(password + "salt_string_2024"); // Add salt for security
}