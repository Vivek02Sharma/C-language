#include <stdio.h>
int main()
{
    char c;
    printf("Enter the alphabet :");
    scanf("%c",&c);

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        printf("The given value is alphabet ");
    }
    else{
        printf("The given value is not an alphabet ");
    }

    return 0;
}