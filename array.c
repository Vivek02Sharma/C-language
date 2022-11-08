// #include <stdio.h>
// int main()
// {
//     int num[13] = {782, 4, 0, 23, 45, 34, 56, 23, 599, 98, 5, 8, 1};

//     printf("The numbers are :\n ");
//     for (int i = 0; i <= 13; i++)
//     {
//         printf("%d\n", num[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d number :", i + 1);
        scanf("%d", &n[i]);
    }

    printf("numbers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Your %d number is %d\n", i + 1, n[i]);
    }

    return 0;
}