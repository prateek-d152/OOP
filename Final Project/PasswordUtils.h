#ifndef PASSWORDUTILS_H
#define PASSWORDUTILS_H

#include <string>

// Password utilities
class PasswordUtils {
public:
    static bool validatePassword(const std::string& password);
    static bool validateUsername(const std::string& username);
    static std::string hashPassword(const std::string& password);
};

#endif // PASSWORDUTILS_H