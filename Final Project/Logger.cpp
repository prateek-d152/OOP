#include "Logger.h"
#include <fstream>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <iostream>

std::string Logger::getCurrentTime() {
    auto now = std::time(nullptr);
    auto tm = *std::localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
    return oss.str();
}

void Logger::log(const std::string& event, const std::string& username) {
    std::ofstream logFile("logs.txt", std::ios::app);
    if (logFile.is_open()) {
        logFile << "[" << getCurrentTime() << "] " << event;
        if (!username.empty()) {
            logFile << " - User: " << username;
        }
        logFile << std::endl;
        logFile.close();
    }
}