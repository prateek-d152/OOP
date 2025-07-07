#ifndef HANGMAN_H  // Header guard to prevent multiple inclusions of this file.
#define HANGMAN_H  

#include <string>   // Includes the string library for handling words and hints.
#include <vector>   // Includes the vector library for storing guessed letters.

class Hangman {  // Declaration of the Hangman class.
private:
    std::string secretWord;  // The word that the player needs to guess.
    std::string hint;        // A hint to help the player guess the word.
    std::string guessedWord; // The word representation with guessed letters and underscores.
    int attempts;            // The number of incorrect guesses allowed before the game ends.
    std::vector<char> guessedLetters; // A list of letters that the player has guessed so far.

public:
    Hangman();  // Constructor to initialize the game variables.

    /**
     * @brief Sets the secret word and its hint, and initializes the game state.
     * @param word The word to be guessed.
     * @param hint The hint for the word.
     */
    void setWordAndHint(const std::string& word, const std::string& hint);

    /**
     * @brief Processes the player's guessed letter and updates the game state.
     * @param letter The letter guessed by the player.
     * @return True if the guessed letter is in the secret word, false otherwise.
     */
    bool guessLetter(char letter);

    /**
     * @brief Checks if the player has successfully guessed the entire word.
     * @return True if the guessed word matches the secret word, false otherwise.
     */
    bool isWin() const;

    /**
     * @brief Checks if the game is over.
     * @return True if the player has won or lost (i.e., no more attempts left), false otherwise.
     */
    bool isGameOver() const;

    /**
     * @brief Displays the current game status, including guessed letters and remaining attempts.
     */
    void displayStatus() const;

    /**
     * @brief Draws the Hangman figure based on the number of incorrect guesses.
     */
    void drawHangman() const;

    /**
     * @brief Reveals the secret word at the end of the game.
     */
    void revealWord() const;
};

#endif // HANGMAN_H  // End of the header guard.
