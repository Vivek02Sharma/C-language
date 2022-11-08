#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// CREATED BY ------VIVEK SHARMA-------------
int main()
{
    char name[20];
    int num, c, r, i = 0;
    printf("\nEnter your name : ");
    gets(name);
    printf("Hi %s,\nWelcome to our game which is guess the number between 1 to 10 in 7 attempt.\n\n", name);

    while (i < 7)
    {
        i++;
        printf("------------------------ROUND : %d ---------------------------------\n", i);
        printf("Enter the number between 1 to 10\n%s : ", name);
        scanf("%d", &num);

        srand(time(NULL));
        r = rand() % 10;
        printf("Computer: %d", r);

        if (num == r)
        {
            printf("\n\nCongratulation , You win the game in %d attempt .\n", i);
            break;
        }
        else
        {
            printf("\nTry again !!!\n\n");
        }
    }

    if (num != r)
    {
        printf("BETTER LUCK NEXT TIME");
    }

    return 0;
}