#include <stdio.h>
int main()
{
    int a = 20;
    int *ptr = NULL;

    ptr = &a;
    printf("%d\n", ptr);
    printf("%d", &a);
    return 0;
}