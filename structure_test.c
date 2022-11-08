#include <stdio.h>

// struct employee
// {
//     int id;
//     char name[30];
//     int salary;
// } emp1, emp2;

// void copy()
// {
//     printf("Enter the id of the first employee : ");
//     scanf("%d", &emp1.id);
//     printf("Enter the name of the first employee : ");
//     scanf("\n%[^\n]s", emp1.name);
//     printf("Enter the salary of the first employee : ");
//     scanf("\n%d", &emp1.salary);

//     printf("\n\nThe id of the first employee is %d\n", emp1.id);
//     printf("The name of the first employee is %s\n", emp1.name);
//     printf("The salary of the first employee is %d\n", emp1.salary);
// }

int main()
{
    struct employee
    {
        int id;
        char name[30];
        int salary;
    } emp1, emp2;

    printf("Enter the id of the first employee : ");
    scanf("%d", &emp1.id);
    printf("Enter the name of the first employee : ");
    scanf("\n%[^\n]s", emp1.name);
    printf("Enter the salary of the first employee : ");
    scanf("\n%d", &emp1.salary);

    printf("\n\nThe id of the first employee is %d\n", emp1.id);
    printf("The name of the first employee is %s\n", emp1.name);
    printf("The salary of the first employee is %d\n", emp1.salary);
    // copy();

    return 0;
}