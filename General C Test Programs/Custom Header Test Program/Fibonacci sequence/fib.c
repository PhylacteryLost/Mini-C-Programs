#include "fib.h"
#include <stdio.h>
#include <stdlib.h>

// Compile with:gcc -Wall -pedantic -o fib fib.c
// Call with: ./fib n (n is length of fibonacci sequence).
void fib(int n) {
    if(n < 1){
        n = 1;
    }

    int fibContents[n];

    // Populate with base numbers.
    for(int i = 0; i < n; i++){
        fibContents[i] = i;
    }

    
    // Only run algorithm if n meets minium requirement.
    if(n > 2){
        for(int i = 2; i < n; i++){            
            fibContents[i] = fibContents[i-1] + fibContents[i-2]; 
        }
    }
    

    // Print fibonacci contents.
    printf("The contents of %d length fibonacci sequence is:\n",n);
    for(int i = 0; i < n; i++){
         printf("n(%d):: %d\n", i, fibContents[i]);
    }

  
    return;
}

int main(int argc, char** argv){
    fib(atoi(argv[1]));
    return 0;
}