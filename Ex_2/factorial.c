#include <stdlib.h> //includes function atoi to turn text to numbers
#include <stdio.h> //for output

int factorial(int num) {
	int factorial = num; //set factorial to num initially

	for (int i=1; i<num; i++) { //start from i = 1 and loop to num-1
		factorial *= (num-i); //times the factorial
	}
	return factorial; //return the factorial

}


int main(int argc, char **argv) {
	if (argc > 2) {
		return -1; //if argument is greater than one there is an error
	}
	else {
		printf("The factorial of %s is %d", argv[1], factorial(atoi(argv[1])) ); //caculates factorial
		return 0; //returns 0
	}
	

}


