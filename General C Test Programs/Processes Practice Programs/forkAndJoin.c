#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h> // Exit.
#include <sys/wait.h> // Wait.

// Compile: gcc -Wall -Werror -o forkAndJoin forkAndJoin.c
int main(int ac, char **args)
{
    pid_t childPID = fork(); // Child's process ID.
    if(childPID < 0) {// error
        perror("fork() error");
        exit(-1); // -1 is something bad happen.
    }

    if(childPID != 0){ // Check if in the parent process (1)
        printf("Parent %d running, child is %d\n", getpid(), childPID);
        wait(NULL); // Waits for child process to join with this parent.
    } else {
        printf("Child %d process running, parent is %d\n", getpid(), getppid()); // ppid - parent pid
        execl("/bin/echo", "echo","Hello, World", NULL); // Can run executables.
    }

    return 0;
}
