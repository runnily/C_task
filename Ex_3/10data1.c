#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>



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
		//Puts the max bytes of things to read in the buffer.
		ssize_t bytes_read = read(fd, buf, MAX_BYTES); 
		
		char ch[1] = "/n" ;
		int i = 0; 
		while (i<bytes_read) {
			if (buf[i]!=ch[0]) {
				putchar(buf[i]);
				i++ ;
			}
		}
		printf("\n");
		close(fd);
		return 0;
	}
}

	