#include <iostream>
#include <string>
#include <unordered_map>

class DiaryEntry {
public:
    std::string date;
    std::string title;
    std::string content;

    DiaryEntry(const std::string& date, const std::string& title, const std::string& content)
        : date(date), title(title), content(content) {}
};

class Diary {
private:
    std::unordered_map<std::string, DiaryEntry> entries;

public:
    void addEntry(const std::string& date, const std::string& title, const std::string& content) {
        entries.emplace(date, DiaryEntry(date, title, content));
    }

    void viewEntry(const std::string& date) {
        auto it = entries.find(date);
        if (it != entries.end()) {
            const DiaryEntry& entry = it->second;
            std::cout << "Date: " << entry.date << std::endl;
            std::cout << "Title: " << entry.title << std::endl;
            std::cout << "Content: " << entry.content << std::endl;
        } else {
            std::cout << "No entry found for the given date." << std::endl;
        }
    }

    void editEntry(const std::string& date, const std::string& newTitle, const std::string& newContent) {
        auto it = entries.find(date);
        if (it != entries.end()) {
            DiaryEntry& entry = it->second;
            entry.title = newTitle;
            entry.content = newContent;
            std::cout << "Entry updated successfully." << std::endl;
        } else {
            std::cout << "No entry found for the given date." << std::endl;
        }
    }

    void deleteEntry(const std::string& date) {
        auto it = entries.find(date);
        if (it != entries.end()) {
            entries.erase(it);
            std::cout << "Entry deleted successfully." << std::endl;
        } else {
            std::cout << "No entry found for the given date." << std::endl;
        }
    }

    void searchEntry(const std::string& keyword) {
        for (const auto& entry : entries) {
            const DiaryEntry& diaryEntry = entry.second;
            if (diaryEntry.content.find(keyword) != std::string::npos || diaryEntry.title.find(keyword) != std::string::npos) {
                std::cout << "Date: " << diaryEntry.date << std::endl;
                std::cout << "Title: " << diaryEntry.title << std::endl;
                std::cout << "Content: " << diaryEntry.content << std::endl;
                std::cout << "---------------------------" << std::endl;
            }
        }
    }
};

class UserInterface {
private:
    Diary diary;

public:
    void displayMenu() {
        std::cout << "Daily Diary" << std::endl;
        std::cout << "1. Add Entry" << std::endl;
        std::cout << "2. View Entry" << std::endl;
        std::cout << "3. Edit Entry" << std::endl;
        std::cout << "4. Delete Entry" << std::endl;
        std::cout << "5. Search Entry" << std::endl;
        std::cout << "6. Exit" << std::endl;
    }

    void processMenuChoice() {
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addEntry();
                break;
            case 2:
                viewEntry();
                break;
            case 3:
                editEntry();
                break;
            case 4:
                deleteEntry();
                break;
            case 5:
                searchEntry();
                break;
            case 6:
                exitProgram();
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    void addEntry() {
        std::string date, title, content;
        std::cout << "Enter the date (YYYY-MM-DD): ";
        std::cin >> date;
        std::cin.ignore();  // Ignore the newline character
        std::cout << "Enter the title: ";
        std::getline(std::cin, title);
        std::cout << "Enter the content: ";
        std::getline(std::cin, content);
        diary.addEntry(date, title, content);
        std::cout << "Entry added successfully." << std::endl;
    }

    void viewEntry() {
        std::string date;
        std::cout << "Enter the date (YYYY-MM-DD): ";
        std::cin >> date;
        diary.viewEntry(date);
    }

    void editEntry() {
        std::string date, newTitle, newContent;
        std::cout << "Enter the date (YYYY-MM-DD) of the entry to edit: ";
        std::cin >> date;
        std::cin.ignore();  // Ignore the newline character
        std::cout << "Enter the new title: ";
        std::getline(std::cin, newTitle);
        std::cout << "Enter the new content: ";
        std::getline(std::cin, newContent);
        diary.editEntry(date, newTitle, newContent);
    }

    void deleteEntry() {
        std::string date;
        std::cout << "Enter the date (YYYY-MM-DD) of the entry to delete: ";
        std::cin >> date;
        diary.deleteEntry(date);
    }

    void searchEntry() {
        std::string keyword;
        std::cout << "Enter the keyword to search: ";
        std::cin >> keyword;
        diary.searchEntry(keyword);
    }

    void exitProgram() {
        std::cout << "Exiting the program. Goodbye!" << std::endl;
        std::exit(0);
    }
};

int main() {
    UserInterface ui;
    while (true) {
        ui.displayMenu();
        ui.processMenuChoice();
    }
    return 0;
}
