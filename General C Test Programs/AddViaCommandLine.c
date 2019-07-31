#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/// Method takes arguements from the command line and
/// calculates the total sum of all integers passed.
///
/// How Use: Build, cd to program dir, run: ProgramName 1 7 8 44 gg 3
///          Returns 1 + 7 + 8 +44 + 3 and a list of all args passed.
int main(int argc, char* argv[])
{
    int total = 0;
    printf("argc (num of args):: %d\n", argc);
    printf("Given args were:\n");

    // Loop through entire array of arguments.
    for(int i = 0; i < argc; i++)
    {
        // Print array[i] content.
        printf("argv[%d] is:: %s\n", i, argv[i]);

        // Add all integers to total sum.
        if(!isdigit(atoi(argv[i])))
        {
           total += atoi(argv[i]);
        }
    }

    // Print sum total.
    printf("The total sum entered is:: %d", total);
}