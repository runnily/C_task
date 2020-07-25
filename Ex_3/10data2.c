#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>



#define MAX_BYTES 10


int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Error <path>" 
			"2 arguments needed");
		return -1;
	}
	else {
		int fd = open(argv[1], O_RDONLY);
		//Essentially this is an array of characters of max bytes
		char buf[MAX_BYTES]; //Allocating memory in the stack
		ssize_t bytes_read = read(fd, buf, MAX_BYTES); 
		
		
		for (int i = 0; i<bytes_read; i++) {
			if (buf[i]=="\n" || buf[i]==" " ){
				i-= 1; 

			} else {
				putchar(buf[i]);
			}
  
		}

		printf("\n");
		close(fd);
		return 0;
	}
}
