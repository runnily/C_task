#include <stdio.h> //for print and scan
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(int argc, char **argv) {
    time_t t = time(NULL);
    srand((unsigned) t );
    int num[1]; //create an array of size 1
    printf("Enter a number (1-100) for the computer to guess> ");
    scanf("%d", num); //user input goes into num
    if (num[0] > 100 || num[0] < 1) { //boundary check for user
        printf("Not the right value");
        return -1;
    }
    
    int correct = 0;
    int computerGuess = 50; //computer guess is 50 to begin
    int attempts = 0;
    char user[5];
    while (correct == 0 || attempts>10) {
        printf("Computer Guess is (%d)\n", computerGuess);
        attempts++;
        printf("Higher (high)\n");
        printf("Lower (low)\n");
        printf("Correct (equal)\n");
        printf("> ");
        scanf("%s", user);
        if (strncmp(user,"low",3 )==0) {
            computerGuess = rand() % (computerGuess+1);
        }
        else if(strncmp(user,"high",4 )==0) {
            computerGuess = rand() % (100+1-computerGuess)+computerGuess;
        }
        else {
            printf("Computer guess Correct");
            correct = 1;
        }
    }
    
    
    
}
