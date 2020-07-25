#include <stdlib.h> //includes function atoi to turn text to numbers
#include <stdio.h> 

int rfactorial(int num) {
	if (num==1) {
		return num; //base case to not call the loop
	} else {
		num *= rfactorial(num-1);
		return num;
	}

}

int main(int argc, char **argv) {
	if (argc>2) {
		printf("Fail more than 2 arguments");
		return -1;
	} else {
		printf("Factorial of (%s) is (%d)", argv[1], rfactorial(atoi(argv[1])) );
		return 0;

	}
	
}