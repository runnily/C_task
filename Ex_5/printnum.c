 #include <stdio.h>


int main(int argc, char **agvc) {
	printf("Enter a number: ");
	int num[1]; //create an array of size q
        scanf("%d", num); //scan input into num

	if (num[0] <= 1) {
		printf("Cannot create file ");
		return -1;
	}

	FILE *fp = fopen("file.txt", "w+"); //create file to write to
	for (int i=0; i < num[0]; i++) {
		fprintf(fp, "%d\n", i);  
	}

	fclose(fp);
	return 0;

}