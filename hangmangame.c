#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "APPLE";
    char guessedWord[] = "_____"; 
    int attempts = 3; 

    printf("Welcome to Hangman!\n");
    printf("Guess the word: %s\n", guessedWord);

    while (attempts > 0 && strcmp(word, guessedWord) != 0) {
        char guess;
        int correctGuess = 0;

        printf("\nEnter a letter: ");
        scanf(" %c", &guess);

        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            attempts--;
            printf("Wrong guess! Attempts remaining: %d\n", attempts);
        } else {
            printf("Good guess! Current word: %s\n", guessedWord);
        }
    }

    if (strcmp(word, guessedWord) == 0) {
        printf("Congratulations! You guessed the word: %s\n", word);
    } else {
        printf("Game over! The correct word was: %s\n", word);
    }

    return 0;
}
