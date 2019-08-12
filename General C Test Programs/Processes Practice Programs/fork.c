#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

// Compile: gcc -Wall - Werror -o fork fork.c
int main()
{
    int x = 1;
    int returnVal = fork();
    if(returnVal == 0) { //Only process executes code here.
        printf("child, x = %d\n",++x);

    } else { // Only parent execute this (return twice?)
        printf("Parent, x = %d\n", --x);
    }

    printf("Exiting with x = %d\n", x);
    return 0;
}
