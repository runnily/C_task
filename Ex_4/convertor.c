#include <stdlib.h>
#include <stdio.h>

#define EXCHANGE_RATE 1.17


int main(int argc, char **argv) {

	printf("UK Pounds  EUROS\n");
	printf("%9.2f  %5.2f\n",1.00, 1.17);
	printf("%9.2f %6.2f\n", 10.00, 11.70);
	printf("%9.2f %6.2f\n", 20.00, 23.40);
	printf("%9.2f %6.2f\n", 30.00, 35.10);
	printf("%9.2f %6.2f\n", 40.00, 46.80);
	printf("%9.2f %6.2f\n", 50.00, 58.50);
	printf("%9.2f %6.2f\n", 60.00, 70.20);
	printf("%9.2f %6.2f\n", 70.00, 81.90);
	printf("%9.2f %6.2f\n", 80.00, 93.60);
	printf("%9.2f %4.2f\n", 90.00, 105.30);
	printf("%9.2f %4.2f\n",100.00, 117.00);

	if (argc > 2) {
		return -1;
	} else {
		printf("\nThe exchange for (%s) is (%.2f)", argv[1], atoi(argv[1])*EXCHANGE_RATE );
	}
		
}