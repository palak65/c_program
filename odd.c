#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2==1)
{
printf("%d\t",i);
}
}
return 0;
}