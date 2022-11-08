#include <stdio.h>
int main()
{
    int num, r = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    int s = num;

    while (num > 0)
    {
        r = r * 10 + num % 10;
        num = num / 10;
    }
    printf("The reverse of %d is %d", s, r);
    return 0;
}