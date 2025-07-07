#ifndef INPUT_H   // Prevents multiple inclusions of this header file.
#define INPUT_H  

#include <string>  // Includes the string library to handle text input.

// Function prototype: Prompts a player to enter a secret word and its hint.
/**
 * @brief Gets a secret word and its hint from a player.
 * @param playerNumber The player who is entering the word (used for messages).
 * @param word Reference to store the secret word entered by the player.
 * @param hint Reference to store the hint entered by the player.
 */
void getWordAndHint(int playerNumber, std::string& word, std::string& hint);

#endif // INPUT_H  // End of the header guard.
