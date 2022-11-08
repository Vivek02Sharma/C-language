
// find the result of any number with any power like 2^3=8
#include <stdio.h>
int main()
{
    float x, y, s;

    printf("Enter the index number :");
    scanf("%f", &x);

    printf("Enter the power of number :");
    scanf("%f", &y);
    s = x;
    for (int i = 1; i < y; i++)
    {
        x *= s;
    }
    printf("The answer of %.4f^%.4f is %.4f", s, y, x);
    return 0;
}