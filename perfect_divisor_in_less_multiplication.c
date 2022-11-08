#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number to find the perfect divisor in less divisible time : ");
    scanf("%d", &num);

    for (int i = (num - 1); i < num; i--)
    {
        if (num % i == 0)
        {
            printf("%d is the perfect divisor of %d at %d time multiplication\n", i, num, num / i);
            break;
        }
    }

    return 0;
}