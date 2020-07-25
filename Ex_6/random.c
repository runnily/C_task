#include <stdio.h> //for print
#include <stdlib.h>
#include <time.h>
#define MAX_ATTEMPTS 7
int main(int argc, char **argv) {
    
    time_t t = time(NULL); //function time stores time in pointer
    
    //srand generate uses a seed value to generate random numbers for rand
    //In this circumstances I am using rand to generate values.
    
    
    srand((unsigned) t); //take the value at pointer
    
    int guessNum = rand()%100+1; //formula for generating a random number between 100 and 1
    
    int notRight = 1; //not right equals True at first
    int userGuess[1]; //array of intgers value 1
    int attempts = 0; //number of attempts
    
    //while not right or attempts is less than max attempts
    while(notRight==1) {
        printf("Guess a number> "); //Prompt user to guess number
        scanf("%d", userGuess); //scan the input and put it into pointer

        attempts += 1; //add 1 to attempts
	

        if (userGuess[0] == guessNum) { //check wether user guess is correct
            printf("Correct");
            notRight=0;//not right is 0
        } else if (userGuess[0] < guessNum) {
		printf("Guess Higher\n");
	} else  {
		printf("Guess Lower\n");
	}

	if (attempts>=MAX_ATTEMPTS) {
		printf("You've used up your number of attempts");
		notRight = 0;
	}
    }
    
}
