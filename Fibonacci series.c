#include <stdio.h>

int main()
{
    int f1 = 0, f2 = 1, i = 3, n, f3;

    printf("Enter the index of Fibonacci series : ");
    scanf("%d", &n);

    printf("Fibonacci series :\n%d\t%d", f1, f2);
    while (i <= n)
    {
        f3 = f1 + f2;
        printf("\t%d", f3);
        f1 = f2;
        f2 = f3; 
        i = i + 1;
    }

    return 0;
}
