#include <stdio.h>
int main()
{
    int a = 10;
    char b[10] = "vivek";
    void *ptr;

    printf("The address of a is %x\n", &a);
    ptr = &a;
    printf("The value of a is %d and address is %x\n\n", (*(int *)ptr), ((int)ptr));

    printf("The address of b is %x\n", &b);
    ptr = &b;
    printf("The value of b is %c and address is %x\n", (*(char *)ptr), ((int)ptr));
    return 0;
}