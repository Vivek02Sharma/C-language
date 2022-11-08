#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number to find prime number up to you want : ");
    scanf("%d", &num);
    printf("\nPrime number between 1 to %d is \n", num);
    for (int i = 1; i <= num; i++)
    {
        int c = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}