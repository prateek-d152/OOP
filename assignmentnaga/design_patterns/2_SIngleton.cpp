#include <iostream>
using namespace std;

class Logger {
private:
    Logger() {}  // Private constructor

public:
    // Delete copy operations
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    static Logger& getInstance() {
        static Logger instance; // Static local ensures only one instance
        return instance;
    }

    void log(const string& message) {
        cout << "Log: " << message << endl;
    }
};

// Client Code
int main() {
    Logger& logger1 = Logger::getInstance();
    Logger& logger2 = Logger::getInstance();

    logger1.log("Logging from logger1");
    logger2.log("Logging from logger2");

    if (&logger1 == &logger2) {
        cout << "Same logger instance.\n";
    }

    return 0;
}
