#ifndef HANGMAN_H
#define HANGMAN_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Word {
protected:
    string originalWord;
    string hint;
public:
    void setWord(const string& word, const string& h);
    string getHint() const;
    string getWord() const;
};

class HangmanGame : public Word {
private:
    string guessedWord;
    int maxAttempts;
    int wrongGuesses;
    vector<char> guessedLetters;
public:
    HangmanGame();
    void initializeGame();
    void displayProgress();
    bool isAlreadyGuessed(char letter);
    void guessLetter(char letter);
    bool isGameWon();
    bool isGameOver();
    void playGame();
};

#endif 
