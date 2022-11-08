// how to use gets and puts
#include <stdio.h>
int main()
{
    char s[30];

    printf("Enter the 1st sentence : ");
    // by using gets() we can store string or sentence in variable
    gets(s);
    // puts() function display the stored string or sentence
    puts(s);

    printf("Enter the 2nd sentence : ");
    // it is very similar to gets() but this function contain scanf()
    scanf("%[^\n]s", s);
    puts(s);

    return 0;
}

