#include<stdio.h>
int main()
{
int a,b;
int *ptr,*ptr1;

printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);

ptr=&a;
ptr1=&b;
*ptr=*ptr+*ptr1;
*ptr1=*ptr-*ptr1;
*ptr=*ptr-*ptr1;

printf("\n a=%d and b=%d ",a,b);
return 0;

}







