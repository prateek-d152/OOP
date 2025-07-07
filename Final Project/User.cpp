#include "User.h"
#include <ctime>
#include <iomanip>
#include <sstream>

User::User() : failedAttempts(0), isLocked(false) {}

User::User(const std::string& user, const std::string& pass, const std::string& r) 
    : username(user), passwordHash(pass), role(r), failedAttempts(0), isLocked(false) {
    auto now = std::time(nullptr);
    auto tm = *std::localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
    createdDate = oss.str();
}