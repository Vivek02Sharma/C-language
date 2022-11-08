#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter any number to find entered number is prime or not :");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is not a Prime number",n);
    }
    return 0;
}
