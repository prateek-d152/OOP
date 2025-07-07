#include "Hangman.h" 
#include <iostream>    
#include <algorithm>   // Used for std::find (to check if a letter was already guessed).
#include <cctype>      

// Constructor: Initializes an empty game state when a Hangman object is created.
Hangman::Hangman() {
    secretWord = "";      // No word set initially.
    hint = "";            // No hint set initially.
    guessedWord = "";     // No guessed word (will be initialized later).
    attempts = 6;         // Set maximum allowed incorrect guesses.
    guessedLetters.clear(); // Ensure the guessed letters list is empty.
}

// Sets the secret word and hint, and initializes game variables.
void Hangman::setWordAndHint(const std::string& word, const std::string& hint) {
    secretWord = word;     // Store the secret word.
    this->hint = hint;     // Store the hint.

    // Initialize guessedWord with underscores ('_') for each letter in secretWord.
    guessedWord.assign(secretWord.size(), '_');

    attempts = 6;          // Reset attempts to the initial number.
    guessedLetters.clear(); // Clear any previously guessed letters.
}

// Handles a letter guessed by the player.
bool Hangman::guessLetter(char letter) {
    letter = std::tolower(letter); // Convert the letter to lowercase to ensure case insensitivity.

    // Check if the letter was already guessed.
    if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
        std::cout << "You've already guessed '" << letter << "'!\n"; // Inform the player.
        return false; // Return false because this guess is not new.
    }

    guessedLetters.push_back(letter); // Store the guessed letter to prevent duplicate guesses.

    bool found = false; // Track whether the letter exists in secretWord.

    // Loop through each letter in secretWord to check for matches.
    for (std::size_t i = 0; i < secretWord.size(); ++i) {
        if (std::tolower(secretWord[i]) == letter) { // Case-insensitive comparison.
            guessedWord[i] = secretWord[i]; // Reveal the correctly guessed letter.
            found = true; // Mark as a successful guess.
        }
    }

    // If the letter was not found in secretWord, reduce attempts.
    if (!found) {
        attempts--; // Reduce the number of remaining attempts.
        std::cout << "Incorrect guess!\n"; // Inform the player.
    }

    return found; // Return true if the letter was in secretWord, false otherwise.
}

// Checks if the player has won (i.e., guessed all letters correctly).
bool Hangman::isWin() const {
    return guessedWord == secretWord; // The game is won if guessedWord matches secretWord.
}

// Checks if the game is over (either the player has won or has no attempts left).
bool Hangman::isGameOver() const {
    return attempts <= 0 || isWin(); // The game is over if attempts reach 0 or the player wins.
}

// Displays the current game status to the player.
void Hangman::displayStatus() const {
    std::cout << "\nWord: "; // Show the word in progress.
    for (char c : guessedWord) {
        std::cout << c << " "; // Print the guessedWord with spaces between letters.
    }
    std::cout << "\nAttempts left: " << attempts << "\n"; // Show remaining attempts.
    std::cout << "Hint: " << hint << "\n"; // Display the hint.
    
    std::cout << "Guessed Letters: "; // Show previously guessed letters.
    for (char letter : guessedLetters) {
        std::cout << letter << " "; // Print each guessed letter.
    }
    std::cout << "\n";
}

// Draws a Hangman figure based on the number of incorrect attempts.
void Hangman::drawHangman() const {
    const std::vector<std::string> hangmanParts = { // ASCII representation of Hangman.
        "  _______",   // 0: Initial state
        " |       |",  // 1: Add the gallows
        " |       O",  // 2: Add the head
        " |      /|\\", // 3: Add the arms
        " |      / \\", // 4: Add the legs
        " |"           // 5: Base line
    };

    int partsToShow = 6 - attempts; // Determine how many parts to display.

    // Print the relevant parts of the Hangman figure.
    for (int i = 0; i < partsToShow && i < static_cast<int>(hangmanParts.size()); ++i) {
        std::cout << hangmanParts[i] << "\n"; // Display each part based on mistakes made.
    }
}

// Reveals the correct word at the end of the game.
void Hangman::revealWord() const {
    std::cout << "The correct word was: " << secretWord << "\n"; // Show the correct word.
}
