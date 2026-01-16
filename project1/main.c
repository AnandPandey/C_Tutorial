#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) +1;
    int guess, numberOfTries = 0;
    printf("Guess a number between 1 and 100:\n");

    do{
        scanf("%d", &guess);
        numberOfTries++;
        if (guess > randomNumber){
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber){
            printf("Too low! Try again.\n");
        } else{
            printf("Congratulations! You guessed the number in %d tries.\n", numberOfTries);
        }
           
        }while(guess != randomNumber);
        return 0;
    }
    
    
