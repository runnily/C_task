#include <sys/types.h> //libaries to include
#include <fcntl.h>
#include <unistd.h>

#define MAX_BYTES 1024 //define a constant

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Usuage: %s <path>\n"
			"Note: max data to read is %d bytes\n",
			arvg[0], MAX_BYTES);
	}
	int fd = open(argv[1], O_RDONLY); //open in read only from the arguments
	//file descriptor means the descriptor of the file, along with how it would be opened
	//The file descriptor would be used as a handle to read from the file
	/* This point want to check you got a valid file descriptor */


	char buf[MAX_BYTES]; // creates a buffer on stack; creates an array of character of max bytes. Allocating memory in stack and tell the read command to write stuff.

	ssize_t bytes_read = read(fd, buf, MAX_BYTES);

	/* error check if the bytes_read is negative */
	/* however its safe because if the bytes_read is negative loop would not process*/

	for (int i = 0; i<bytes_read; i++) { //reads what's the read command has correct file.
		putchar(buf[i]);
	}
	putchar("\n");
	close(fd);

 /*returns size t it expects an int d and tell you down here d; which is a file descriptor, the address of a buffer to read data. This is an out parameter, void * is a pointer that you don't know the type. An object with a capital O, could be a reference to object size_t number of bytes to read it. This buffer must be bytes big. Therefore enough memory to read. Different architectures to read
We want to indicate whether the read succeeds or not.
*/
	
