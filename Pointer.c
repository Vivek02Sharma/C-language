#include <stdio.h>

int main() {
    int a=10;
    int *pri=&a;   
    printf("The address of a is %p",pri);
    printf("\nThe address of a is %p",&pri);
    printf("\nThe address of a is %p",&a);
    printf("\nThe value of a is %d",*pri);
    
    
    
    
    return 0;
}
