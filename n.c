#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
scanf("%d",&n);
for(int i=-n;i<=n;i++)
{
printf("%d\t",i);
}
return 0;
}