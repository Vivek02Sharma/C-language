// Normal array
//  #include <stdio.h>
//  int main()
//  {
//      int array[]={1,2,4,2,5,34,63,3,4,3};

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n",array[i]);
//     }

//     return 0;
// }
//---------------------------------------------------------------------------------------------------------
// how to display two-dimensional array
//  #include <stdio.h>
//  int main()
//  {
//      int num[2][4] = {{23, 53, 64, 67}, {89, 75, 13, 43}};
//      printf("\n\nThe number is : \n");
//      for (int i = 0; i < 2; i++)
//      {
//          for (int j = 0; j < 4; j++)
//          {
//              printf("%d ", num[i][j]);
//          }
//          printf("\n");
//      }

//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------
// call by value of array to the function
// #include <stdio.h>

// void number(int num[10])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", num[i]);
//     }
// }
// int main()
// {
//     int num[10] = {98, 88, 76, 71, 90, 100, 246, 543, 355, 123};
//     printf("\nThe numbes are :\n");
//     number(num);
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------------
// call by reference of array to the function

// first method of call by reference of array
#include <stdio.h>

void numbers(int num[10])
{
    printf("\nBefore changing array :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n\nAfter changing the array : \n");
    num[4] = 100;
    num[5] = 110;
    num[6] = 267;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    // NOTE:Here is the value those are changed
    printf("\n\nHere is the value those are changed :\n num[4] = 100;\n num[5] = 110;\n num[6] = 267;\n ");
}
int main()
{
    int num[10] = {98, 88, 76, 71, 90, 100, 246, 543, 355, 123};

    numbers(num);
    return 0;
}