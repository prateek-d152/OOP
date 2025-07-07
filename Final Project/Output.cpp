#include "Output.h"   // Include the header file that declares output functions.
#include <iostream>   // Required for input and output operations (std::cout).

// Clears the screen using ANSI escape codes (works on Linux/macOS).
// This helps provide a clean display when updating game status.
void clearScreen() {
    std::cout << "\033[H\033[J"; // Moves the cursor to the top left and clears the screen.
}

// Displays a winner effect with ASCII art and a congratulatory message.
void displayWinnerEffect(int winningPlayer) {
    std::cout << R"(
 __     __          __          ___       _ 
 \ \   / /          \ \        / (_)     | |
  \ \_/ /__  _   _   \ \  /\  / / _ _ __ | |
   \   / _ \| | | |   \ \/  \/ / | | '_ \| |
    | | (_) | |_| |    \  /\  /  | | | | | |
    |_|\___/ \__,_|     \/  \/   |_|_| |_|_|
)" << std::endl;  // Multi-line raw string literal for ASCII art.

    std::cout << "\n***** PLAYER " << winningPlayer << " WINS! *****\n\n"; // Announce the winner.
}

// Calls the Hangman class method to display the game status (word progress, attempts, etc.).
void displayStatus(const Hangman &game) {
    game.displayStatus(); // Delegates to Hangman's displayStatus() function.
}

// Calls the Hangman class method to draw the Hangman figure.
void drawHangman(const Hangman &game) {
    game.drawHangman(); // Delegates to Hangman's drawHangman() function.
}

// Displays a "Game Over" message if the player has lost.
void displayGameOver(const Hangman &game) {
    if (!game.isWin()) { // If the player has NOT won, display the game-over message.
        std::cout << "\nGame Over! You ran out of attempts.\n";
        game.revealWord(); // Show the correct word.
    }
}
