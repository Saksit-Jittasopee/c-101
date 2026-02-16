#include <stdio.h>
#include <stdlib.h>

int main() {

    int secretNumber = 95;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0; //boolean check guess

    while(guess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter Your Number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1){
        printf("You Lost\n");
        printf("Guess Count: %d", guessCount);
    } else {
        printf("You Won\n");
        printf("Guess Count: %d", guessCount);
    }
    return 0;
}