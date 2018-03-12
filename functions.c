//use of functions in c examples
#include<stdio.h>
void fun(int a,float b);//function prototype that return void

int main()//main function returing an integer
{
  int a=1; 
  float b=1.0;
  fun(a,b);//function call with formal parameters
  return 0;//return value;
}
void fun(int a,float b)
{
  printf("FUNCTIONS");
}
