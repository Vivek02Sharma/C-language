#include <stdio.h>
int main()
{
    int n, a, b;
    b = a = 1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d", &n);
    while (a <= n)
    {
        b *= a;
        a++;
    }
    printf("\nThe Factorial of %d is : %d", n, b);
    return 0;
}
