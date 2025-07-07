#include "hangman.h"

void Word::setWord(const string& word, const string& h) {
    originalWord = word;
    hint = h;
}

string Word::getHint() const {
    return hint;
}

string Word::getWord() const {
    return originalWord;
}

HangmanGame::HangmanGame() {
    maxAttempts = 6;
    wrongGuesses = 0;
}

void HangmanGame::initializeGame() {
    guessedWord = string(originalWord.length(), '_');
    guessedLetters.clear();
    wrongGuesses = 0;
}

void HangmanGame::displayProgress() {
    cout << "\nHint: " << hint << endl;
    cout << "Word: ";
    for (char c : guessedWord) {
        cout << c << " ";
    }
    cout << "\nGuessed letters: ";
    for (char c : guessedLetters) {
        cout << c << " ";
    }
    cout << "\nRemaining Attempts: " << maxAttempts - wrongGuesses << endl;
}

bool HangmanGame::isAlreadyGuessed(char letter) {
    return find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end();
}

void HangmanGame::guessLetter(char letter) {
    guessedLetters.push_back(letter);
    bool correct = false;

    for (size_t i = 0; i < originalWord.length(); i++) {
        if (tolower(originalWord[i]) == tolower(letter)) {
            guessedWord[i] = originalWord[i];
            correct = true;
        }
    }

    if (!correct) {
        wrongGuesses++;
        cout << "Incorrect guess!" << endl;
    } else {
        cout << "Good guess!" << endl;
    }
}

bool HangmanGame::isGameWon() {
    return guessedWord == originalWord;
}

bool HangmanGame::isGameOver() {
    return wrongGuesses >= maxAttempts;
}

void HangmanGame::playGame() {
    initializeGame();
    while (!isGameWon() && !isGameOver()) {
        displayProgress();
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        if (isAlreadyGuessed(guess)) {
            cout << "You already guessed that letter. Try another one.\n";
            maxAttempts--;
            continue;
        }

        guessLetter(guess);
    }

    displayProgress();
    if (isGameWon()) {
        cout << "\n Congratulations! You guessed the word: " << originalWord << endl;
    } else {
        cout << "\n Game Over! The word was: " << originalWord << endl;
    }
}

int main() {
    HangmanGame game;
    string word, hint;

    cout << "------ Hangman Game Setup ------\n";
    cout << "Enter the word to guess (Player 1): ";
    getline(cin, word);

    cout << "Enter a hint (e.g., animal, place, object): ";
    getline(cin, hint);

    system("cls");

    game.setWord(word, hint);

    cout << "------ Hangman Game Starts ------\n";
    game.playGame();

}
