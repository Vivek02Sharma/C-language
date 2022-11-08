#include <stdio.h>

int sum(){
  int a=10,b=20;
  printf("First method to add number %d\n",a+b);
}//first

int add(int n1,int n2){
  printf("Second method to add number %d\n",n1+n2);
}//second

int plus(int num1,int num2){
  return num1+num2;
}//third


int main() {
  sum();//first

  int n1c=5,n2c=10;
  
  add(n1c,n2c);//second 

  printf("Third method to sum number %d ",plus(n1c,n2c));//third
  
  return 0;
}
