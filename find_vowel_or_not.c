#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    printf("Enter the alphabet:");
    scanf("%c",&c);
    int uc = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    int lc = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (uc || lc)
    {
        printf("The entered alphabet is vowel");
    }
    else if(!isalpha(c)){//isalpha is used for checking the given letter is alphabet or not
        printf("The entered alphabet is not a alphabet");
    }
    else
    {
        printf("The entered alphabet is not vowel");
    }
    return 0;
}