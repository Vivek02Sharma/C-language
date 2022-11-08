#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter the number :");
    scanf("%d", &num);
    int n = num;

        do{
            num = num / 10;
            count++;
        }while(num != 0);
        printf("%d number contain %d digit", n, count);
   

    return 0;
}