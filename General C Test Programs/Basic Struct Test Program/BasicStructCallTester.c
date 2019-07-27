#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Linux sleep.
#include <windows.h>// Windows sleep.
#include <conio.h>  // Allows screen clearing.

#include "UserInfoStruct.h"

int main()
{
    int numUsers = 0;
    struct user * users;

    // Ask for and get number of users to register.
    printf("How many users? (keep few for testing purposes)\n");
    scanf("%d", &numUsers);

    // Allocate needed memory from heap.
    users = (struct user *) malloc(numUsers * sizeof(struct user));

    // Have user enter all details for new users.
    for(int i = 0; i < numUsers; i++)
    {
        system("cls");//clears the screen

        users[i].userID = i;
        printf("UserID:: %d\n", (int)users[i].userID);

        printf("Enter user's full name: ");
        scanf("%s*", &users[i].fullName);
        Sleep(600);

        printf("Enter user's full age: ");
        scanf("%d", &users[i].age);
        Sleep(600);

        printf("Enter user's full hourly rate: ");
        scanf("%f", &users[i].hourlyRate);
        Sleep(600);

        printf("Enter user's full gender: ");
        scanf("%s", &users[i].gender);
        Sleep(600);
    }

    system("cls");//clears the screen

    printf("=======New User Info=======\n");
    printf("UserID\tFull Name\tAge\tHourly Rate\tGender\n");

    for(int i = 0; i < numUsers; i++)
    {
        struct user curUser = users[i];
        printf("%d\t%s\t\t%d\t$%5.2f\t\t%s",
               curUser.userID, &curUser.fullName, curUser.age,
                curUser.hourlyRate, &curUser.gender);
    }



    return 0;
}






