#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;      // Sum of all nums.
    int howManyNums = 0;// Amount of numbers to be averaged.
    int * pNumArray;    // Point array tp hold numbers.
    float avg = 0.0;    // Average of sum / numOfNumbers.

    // Get how many numbers to avg.
    printf("How many nums?\n");
    scanf(" %d",&howManyNums);

    // Dynamically allocate memory from heap.
    pNumArray = (int *) malloc(howManyNums * sizeof(int));

    // Prompt user for num inputs.
    printf("Enter the numbers:\n");

    // Collect all inputs and add to sum of total.
    for(int i = 0; i < howManyNums; i++)
    {
        scanf(" %d", &pNumArray[i]);
        total += pNumArray[i];
    }

    // Return borrowed memory.
    free(pNumArray);

    // Calculate average.
    avg = (float)total / (float)howManyNums;

    // Print avaerage.
    printf("The average is: %f", avg);

    return 0;
}
