#include <lib.h>    // provides _syscall and message
#include <stdio.h>

int main(void) {
    message m;  // Minix uses a message to pass parameters to a system call
    
    _syscall(VFS_PROC_NR, PRINTMSG, &m);
        /* _syscall asks the kernel to ask the server process identified by
         * VFS_PROC_NR (the VFS server process) to execute the system call
         * identified by call number PRINTMSG with any parameters in the 
         * message m (accessed through its address &m).
         */   
}
