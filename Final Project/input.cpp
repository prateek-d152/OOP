#include "input.h"    // Include the corresponding header file for function declaration.
#include <iostream>   // Required for input and output operations (std::cin, std::cout).
#include <limits>     // Used to clear the input buffer.
#include <cctype>     // Provides std::tolower() to convert characters to lowercase.

// Function to get a secret word and hint from the player.
void getWordAndHint(int playerNumber, std::string& word, std::string& hint) {
    do {
        // Prompt the player to enter a word.
        std::cout << "Player " << playerNumber << ", enter a word (at least 2 letters): ";
        std::cin >> word; // Read the word from user input.

        // Validate that the word is at least 2 letters long.
        if (word.length() < 2) {
            std::cout << "The word must be at least 2 letters long! Try again.\n";
        }
    } while (word.length() < 2); // Keep asking until a valid word is entered.

    // Prompt the player to enter a hint for the word.
    std::cout << "Enter a hint for the word: ";

    // Ignore any leftover newline characters in the input buffer.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Read the entire hint line from the player (spaces allowed).
    std::getline(std::cin, hint);

    // Convert the word to lowercase for consistency (case insensitivity).
    for (char &c : word) {
        c = std::tolower(c);
    }
}
