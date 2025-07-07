#ifndef LOGGER_H
#define LOGGER_H

#include <string>

// Logger class for audit logs
class Logger {
private:
    static std::string getCurrentTime();

public:
    static void log(const std::string& event, const std::string& username = "");
};

#endif // LOGGER_H