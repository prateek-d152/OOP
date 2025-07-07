#include "Hangman.h"   // Include the Hangman game logic.
#include "input.h"     // Include input functions for getting words and hints.
#include "Output.h"    // Include output functions for displaying game status.
#include <iostream>    // Required for input/output operations.
#include <cctype>      // Provides std::tolower() for case-insensitive input handling.
#include <limits>      // Used for input validation (ignoring incorrect inputs).

/**
 * @brief Handles a single round of gameplay.
 * 
 * - The guessing player tries to guess the word.
 * - If they guess correctly, they win.
 * - If they fail, the setter (the other player) wins.
 * 
 * @param guessingPlayer The player number who is guessing the word.
 * @param game The Hangman game instance.
 */
void playRound(int guessingPlayer, Hangman &game) {
    std::cout << "\n=== Player " << guessingPlayer << "'s Turn to Guess ===\n";

    // Game continues until the word is guessed or attempts run out.
    while (!game.isGameOver()) {
        displayStatus(game);   // Show guessed letters, remaining attempts.
        drawHangman(game);     // Display the Hangman figure.

        std::cout << "Enter a letter: ";
        char guess;
        std::cin >> guess;

        // Validate the input to ensure it is a letter.
        if (!std::isalpha(guess)) {
            std::cout << "Invalid input! Please enter a letter.\n";

            // Clear any invalid input and ignore leftover input buffer.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;  // Skip the rest of this iteration and re-prompt.
        }

        game.guessLetter(std::tolower(guess)); // Convert letter to lowercase and process guess.
    }

    // Once the game ends, show the final status.
    displayStatus(game);

    // Check if the guessing player won or lost.
    if (game.isWin()) {
        // The guessing player wins.
        displayWinnerEffect(guessingPlayer);
        std::cout << "\nCongratulations, Player " << guessingPlayer << "! You guessed the word!\n";
    } else {
        // If the guesser fails, the setter wins.
        int setter = (guessingPlayer == 1) ? 2 : 1;
        std::cout << "\nGame Over! You ran out of attempts.\n";
        std::cout << "Player " << setter << " wins because the guesser couldn't guess the word.\n";
        game.revealWord();  // Show the correct word.
    }
}

/**
 * @brief Main function to run the Hangman game loop.
 * 
 * - Players take turns setting and guessing words.
 * - The game asks if they want to play again after both rounds.
 */
int main() {
    while (true) { // Infinite loop to allow replaying the game.
        Hangman game1, game2;  // Two games for Player 1 and Player 2.
        std::string word1, hint1, word2, hint2;

        // Player 1 sets the word.
        std::cout << "\n===== PLAYER 1 SETS A WORD =====\n";
        getWordAndHint(1, word1, hint1);
        clearScreen();  // Clears the screen to hide the word from Player 2.
        game1.setWordAndHint(word1, hint1); // Store Player 1's word.

        // Player 2 attempts to guess Player 1's word.
        playRound(2, game1);

        // Player 2 sets the word.
        std::cout << "\n===== PLAYER 2 SETS A WORD =====\n";
        getWordAndHint(2, word2, hint2);
        clearScreen();
        game2.setWordAndHint(word2, hint2); // Store Player 2's word.

        // Player 1 attempts to guess Player 2's word.
        playRound(1, game2);

        // Ask if players want to play again.
        std::cout << "\nDo you want to play again? (y/n): ";
        char choice;
        std::cin >> choice;

        // If the player enters anything other than 'y' or 'Y', exit the loop.
        if (std::tolower(choice) != 'y') {
            std::cout << "Thanks for playing! Goodbye!\n";
            break; // Exit the while loop, ending the program.
        }
    }
    return 0; // Return 0 to indicate successful execution.
}