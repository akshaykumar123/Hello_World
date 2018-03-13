#include<stdio.h>
int main()
{
int length;
int array[3]={"1","2","3"};
length = array[0]/sizeof(array);
 for(int i=0;i<length;i++)
 {
   printf("%d",&array[i]);
 }
return 0;
}
