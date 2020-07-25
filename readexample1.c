#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_BYTES 1024

int main(int argc, char** argv) {
	if (argc < 2) {
		printf("Usage: %s <path>\n"
			"Note: max data yo read is %d bytes\n",
			argv[0], MAX_BYTES);

	}
	int fd = open(argv[1], O_RDONLY);
	
	char* buf = (char*) malloc(MAX_BYTES); //allocated memory on heap instead not stack. Therefore dynamic data
	
	ssize_t bytes_read = read(fd, burg, MAX_BYTES); //returns amount of bytes read

	for (int i = 0; i<byes_read; i++) {
		putchar(buf[I]); //outputs data into the screen
	}
	
	putchar("\n");
	free(buf);
	close(fd);


}