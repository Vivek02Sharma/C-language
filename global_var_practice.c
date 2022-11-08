
// How to change global variable value
#include <stdio.h>

int glo_var = 20;

int main()
{
    int *a;
    a = &glo_var;
    // How to change global variable
    // method-1
    *a = 24;
    printf("First method :\n%d\n", *a);
    printf("%d\n\n", glo_var);
    // method -2
    glo_var = 22;
    printf("Second method :\n%d\n", glo_var);
    printf("%d\n", *a);
    return 0;
}

// change of global variable value from function to function
//  case -1
//   #include <stdio.h>

// int globalvar = 12;

// void func()
// {

//     int *b = &globalvar;
//     *b = 23;
//     printf("%d\n", globalvar);
// }
// int main()
// {
//     // NOTE:Here we changed  value of global variable from  12 to 23
//     func();

//     //  NOTE:If you change global variable value in other function then it will reflect the changed value if you called .
//     //  Here we changed global variable value from 23 to 35 by adding 12 in 23 like 12+23=35
//     int *a = &globalvar;
//     globalvar = *a + 12;
//     printf("%d\n", *a);
//     printf("%d\n", globalvar);

//     func();
//     return 0;
// }

// case-2
//  #include <stdio.h>

// int globalvar = 12;

// void func()
// {

//     printf("%d\n", globalvar);
// }
// int main()
// {

//     func();

//     //  NOTE:If you change global variable value in other function then it will reflect the changed value if you called .
//     //  Here we changed global variable value from 12 to 24 by adding 12 in global variable
//     int *a = &globalvar;
//     globalvar = *a + 12;
//     printf("%d\n", *a);
//     printf("%d\n", globalvar);

//     // In below function the value of global variable changed because we already changed the value in the above code
//     // That is  why when we call func() again then the changed value reflect to the function therefore the result of
//     // function is different from previous func() result
//     func();
//     return 0;
// }
