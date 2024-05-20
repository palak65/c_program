#include<stdio.h>
int perfect()
int i,a,j;
printf("enter A:");
scanf("%d",&a);
for (i=1;i<a;i++)
{
if
(a%i==0)
{
printf("%d",i);
j=j+i;
}
}
if(a==j)
{
printf("\n perfect");
}
else
{
printf("notperfect");
}

int main()
{
	perfect();
}
