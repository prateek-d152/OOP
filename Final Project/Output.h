#ifndef OUTPUT_H   // Header guard to prevent multiple inclusions of this file.
#define OUTPUT_H  

#include "Hangman.h"  // Include the Hangman class to interact with game state.

// Clears the console screen to provide a better user experience.
void clearScreen();

/**
 * @brief Displays a special effect when a player wins.
 * @param winningPlayer The number of the player who won the game.
 */
void displayWinnerEffect(int winningPlayer);

/**
 * @brief Displays the current game status.
 * @param game A reference to the Hangman game object.
 * This function shows:
 * - The guessed word so far.
 * - Remaining attempts.
 * - Letters guessed.
 */
void displayStatus(const Hangman &game);

/**
 * @brief Draws the Hangman figure based on the number of incorrect attempts.
 * @param game A reference to the Hangman game object.
 */
void drawHangman(const Hangman &game);

/**
 * @brief Displays a message when the game is over, indicating win or loss.
 * @param game A reference to the Hangman game object.
 * This function:
 * - Checks if the player has won or lost.
 * - Displays the correct word if the player loses.
 */
void displayGameOver(const Hangman &game);

#endif // OUTPUT_H  // End of the header guard.
