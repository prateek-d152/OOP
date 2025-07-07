#include <iostream>   // For input/output operations (cin, cout)
#include <fstream>    // For file handling (reading/writing files)
#include <string>     // For using string data type

using namespace std;  // To avoid writing std:: before standard functions and types

// Book class holds book details like id, title, author, and genre
class Book {
private:
    int id;          // Unique ID for each book
    string title;    // Title of the book
    string author;   // Author name
    string genre;    // Genre/category of the book

public:
    // Default constructor - sets id to 0 when a book object is created without details
    Book() : id(0) {}

    // Parameterized constructor to create a book with given details
    Book(int id, string title, string author, string genre)
        : id(id), title(title), author(author), genre(genre) {}

    // Function to print book details to the console
    void display() const {
        cout << "ID: " << id
             << ", Title: " << title
             << ", Author: " << author
             << ", Genre: " << genre << endl;
    }

    // Getter functions to access private data members safely
    int getId() const { return id; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getGenre() const { return genre; }

    // Converts book details to a single CSV string to save in file
    string toCSV() const {
        return to_string(id) + "," + title + "," + author + "," + genre;
    }

    // Static function to create a Book object from a CSV line read from file
    static Book fromCSV(const string& line) {
        size_t pos1 = line.find(',');                // Find first comma
        size_t pos2 = line.find(',', pos1 + 1);      // Find second comma
        size_t pos3 = line.find(',', pos2 + 1);      // Find third comma
        
        // Extract id, title, author, and genre substrings from the line
        int id = stoi(line.substr(0, pos1));
        string title = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string author = line.substr(pos2 + 1, pos3 - pos2 - 1);
        string genre = line.substr(pos3 + 1);
        
        // Return new Book object with extracted data
        return Book(id, title, author, genre);
    }
};

// Library class manages collection of books
class Library {
private:
    static const int MAX_BOOKS = 100;    // Max number of books library can hold
    Book books[MAX_BOOKS];                // Array to store Book objects
    int count;                           // Current number of books
    const string filename = "books.txt"; // File to save/load book data

public:
    // Constructor initializes count and loads books from file
    Library() : count(0) {
        loadFromFile();
    }

    // Function to add a new book by taking user input
    void addBook() {
        if (count >= MAX_BOOKS) {
            cout << "Library is full! Cannot add more books.\n\n";
            return;  // Stop if array is full
        }

        int id;
        string title, author, genre;

        cout << "Enter Book ID: ";
        cin >> id;

        // Handle invalid input for ID (non-numeric)
        if (cin.fail()) {
            cin.clear();                      // Clear error flags
            cin.ignore(10000, '\n');          // Remove invalid input from buffer
            cout << "Invalid input for ID. Please enter a number.\n\n";
            return;
        }

        // Check if ID already exists to avoid duplicates
        for (int i = 0; i < count; i++) {
            if (books[i].getId() == id) {
                cout << "A book with this ID already exists.\n\n";
                return;
            }
        }

        cin.ignore(); // Clear newline character before getline
        cout << "Enter Book Title: ";
        getline(cin, title);    // Read full line including spaces
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Genre: ";
        getline(cin, genre);

        // Add new Book object to array and increment count
        books[count++] = Book(id, title, author, genre);

        saveToFile(); // Save updated books list to file
        cout << "Book added successfully!\n\n";
    }

    // Displays details of all books in the library
    void displayAllBooks() const {
        if (count == 0) {
            cout << "No books available.\n\n";
            return;
        }

        cout << "\n--- Book List ---\n";
        for (int i = 0; i < count; i++) {
            books[i].display();  // Call each book's display function
        }
        cout << endl;
    }

    // Search books by title keyword (partial match)
    void searchByTitle() {
        string keyword;
        cin.ignore();  // Clear input buffer before getline
        cout << "Enter title keyword to search: ";
        getline(cin, keyword);

        bool found = false;
        for (int i = 0; i < count; i++) {
            // Check if title contains the keyword
            if (books[i].getTitle().find(keyword) != string::npos) {
                books[i].display();
                found = true;
            }
        }

        if (!found) {
            cout << "No books found with title containing \"" << keyword << "\".\n";
        }
        cout << endl;
    }

    // Search book by exact ID
    void searchById() const {
        int searchId;
        cout << "Enter Book ID to search: ";
        cin >> searchId;

        // Handle invalid input
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input for ID.\n\n";
            return;
        }

        bool found = false;
        for (int i = 0; i < count; i++) {
            if (books[i].getId() == searchId) {
                books[i].display();
                found = true;
                break;  // No need to search further
            }
        }

        if (!found) {
            cout << "No book found with ID " << searchId << ".\n";
        }
        cout << endl;
    }

    // Search books by author keyword
    void searchByAuthor() {
        string keyword;
        cin.ignore();
        cout << "Enter author name to search: ";
        getline(cin, keyword);

        bool found = false;
        for (int i = 0; i < count; i++) {
            if (books[i].getAuthor().find(keyword) != string::npos) {
                books[i].display();
                found = true;
            }
        }

        if (!found) {
            cout << "No books found by author \"" << keyword << "\".\n";
        }
        cout << endl;
    }

    // Search books by genre keyword
    void searchByGenre() {
        string keyword;
        cin.ignore();
        cout << "Enter genre to search: ";
        getline(cin, keyword);

        bool found = false;
        for (int i = 0; i < count; i++) {
            if (books[i].getGenre().find(keyword) != string::npos) {
                books[i].display();
                found = true;
            }
        }

        if (!found) {
            cout << "No books found in genre \"" << keyword << "\".\n";
        }
        cout << endl;
    }

    // Remove book either by ID or by Title
    void removeBook() {
        int option;
        cout << "Remove Book by:\n";
        cout << "1. ID\n";
        cout << "2. Title\n";
        cout << "Enter your choice: ";
        cin >> option;
        cin.ignore(); // clear buffer

        if (option == 1) {
            int idToRemove;
            cout << "Enter Book ID to remove: ";
            cin >> idToRemove;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input for ID.\n\n";
                return;
            }

            // Search for book by ID
            for (int i = 0; i < count; i++) {
                if (books[i].getId() == idToRemove) {
                    // Shift books left to overwrite the removed one
                    for (int j = i; j < count - 1; j++) {
                        books[j] = books[j + 1];
                    }
                    count--;  // Decrease total count
                    saveToFile();  // Save updated list to file
                    cout << "Book removed successfully.\n\n";
                    return;
                }
            }
            cout << "Book with ID " << idToRemove << " not found.\n\n";

        } else if (option == 2) {
            string titleToRemove;
            cout << "Enter Book Title to remove: ";
            getline(cin, titleToRemove);

            // Search for book by title (exact match)
            for (int i = 0; i < count; i++) {
                if (books[i].getTitle() == titleToRemove) {
                    for (int j = i; j < count - 1; j++) {
                        books[j] = books[j + 1];
                    }
                    count--;
                    saveToFile();
                    cout << "Book removed successfully.\n\n";
                    return;
                }
            }
            cout << "Book with title \"" << titleToRemove << "\" not found.\n\n";

        } else {
            cout << "Invalid option.\n\n";
        }
    }

    // Save all books to the file (overwrite existing content)
    void saveToFile() const {
        ofstream fout(filename);
        for (int i = 0; i < count; i++) {
            fout << books[i].toCSV() << "\n";  // Write book data as CSV line
        }
        fout.close();
    }

    // Load books from file when program starts
    void loadFromFile() {
        ifstream fin(filename);
        string line;
        while (getline(fin, line)) {
            if (!line.empty() && count < MAX_BOOKS) {
                books[count++] = Book::fromCSV(line);  // Convert line to Book and add to array
            }
        }
        fin.close();
    }

    // Check if library has any books
    bool hasBooks() const {
        return count > 0;
    }
};

// Main program - User Interface and menu
int main() {
    Library lib;    // Create Library object, loads existing books
    int choice;     // Stores user menu choice

    do {
        cout << "===== Book Management System =====\n";
        cout << "1. Add Book\n";

        // Show options only if books exist
        if (lib.hasBooks()) {
            cout << "2. Display All Books\n";
            cout << "3. Search Book by Title\n";
            cout << "4. Search Book by ID\n";
            cout << "5. Search Book by Author\n";
            cout << "6. Search Book by Genre\n";
            cout << "7. Remove Book\n";
            cout << "8. Exit\n";
        } else {
            cout << "8. Exit\n";  // If no books, only Add and Exit available
        }

        cout << "Enter your choice: ";
        cin >> choice;

        // If no books yet, force to add book or exit
        if (!lib.hasBooks() && choice != 1 && choice != 8) {
            cout << "Please add a book first!\n\n";
            continue;  // Restart loop
        }

        // Execute action based on choice
        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.displayAllBooks(); break;
            case 3: lib.searchByTitle(); break;
            case 4: lib.searchById(); break;
            case 5: lib.searchByAuthor(); break;
            case 6: lib.searchByGenre(); break;
            case 7: lib.removeBook(); break;
            case 8: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice.\n";
        }

    } while (choice != 8);  // Loop until user selects Exit

    return 0;  // End program
}
