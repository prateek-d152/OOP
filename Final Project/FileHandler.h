#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "User.h"
#include <vector>

// File handler for user data
class FileHandler {
public:
    static void saveUsers(const std::vector<User>& users);
    static std::vector<User> loadUsers();
};

#endif // FILEHANDLER_H