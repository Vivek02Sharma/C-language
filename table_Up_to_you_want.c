#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to find the table  up to you want : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("The table of %d :\n\n ", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("\t%d X %d = %d\n", i, j, i * j);
        }
        printf("\n\n");
    }

    return 0;
}