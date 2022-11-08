#include <stdio.h>
#include <string.h>

union person
{
    char name[30];
    int age;
    int height;
    int weight;
    char address[50];
    double phone_number;
    int monthly_salary;
} prs;
void details()
{
    union person detail;

    strcpy(detail.address, "Indira nagar ,rupa devi ,pada no.1 ,wagle estate THANE (w)");
    printf("The address of the person is %s\n", detail.address);
    detail.phone_number = 7208741190;
    printf("The phone number of the person is %.0lf\n", detail.phone_number);
}
int main()
{
    strcpy(prs.name, "Naruto Uzumaki");
    printf("The name is %s\n", prs.name);
    prs.age = 19;
    printf("Age of the person is %d\n", prs.age);
    prs.height = 6;
    printf("Height of the person is %d\n", prs.height);
    prs.weight = 60;
    printf("Weight of the person is %d\n", prs.weight);

    details();

    return 0;
}