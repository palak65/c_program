#include<stdio.h>
int main()
{
int n,i;
printf("enter the value of n:");
scanf("%d",&n);
i=-n;
while(i<=n)
{
printf("%d\n",i);
i++;
}
return 0;
}