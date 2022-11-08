#include <stdio.h>

int recursive_func(int i, int num)
{
    if (i <= num)
    {
        printf("%d\n", i);
        recursive_func(i + 1, num);
    }
}
int main()
{
    int initial_number = 1, final_number;
    printf("Enter the number to find natural up to you want : ");
    scanf("%d", &final_number);

    recursive_func(initial_number, final_number);

    return 0;
}