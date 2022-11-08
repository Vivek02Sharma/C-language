// putting the value of global variable using scanf()
//  #include <stdio.h>

// int global;

// int main()
// {
//     printf("Enter the value of global variable : ");
//     scanf("%d",&global);
//     printf("The value of global variable is %d",global);
//     return 0;
// }


//global variable can not change outside the function
#include <stdio.h>

int global = 45;

int main()
{
    int *a;
    a = &global;
    *a = 30;
    printf("%d", global);
    return 0;
}