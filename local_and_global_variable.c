#include <stdio.h>

int a = 100;

int func()
{
    printf("%d", &a);
}
int main()
{
    int a = 10;
    printf("%d\n\n", &a);
    func();
    return 0;
}