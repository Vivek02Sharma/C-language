#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
};
//  struct student first_student, second_student; // global data type
//  void print()
//  {
//      first_student.id = 1;
//      strcpy(first_student.name, "Vivek Sharma");
//      printf("The student id of first student is %d\n", first_student.id);
//      printf("The name of first student is %s\n\n", first_student.name);
//  }
int main()
{
    // first method of structure definition
    struct student first_student; // local data type
    first_student.id = 1;
    strcpy(first_student.name, "Vivek Sharma");
    printf("The student id of first student is %d\n", first_student.id);
    printf("The name of first student is %s\n\n", first_student.name);
    // print();

    // second method of structure definition
    struct student second_student = {2, "Akhilesh Yadav"};
    printf("The student id of second student is %d\n", second_student.id);
    printf("The name of second student is %s\n", second_student.name);

    return 0;
}