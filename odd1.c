#include<stdio.h>
int main()
{
int n,i,total=0;
printf("enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2==1)
{
total=total+i;
printf("%d\t",i);
}
}
printf("%d",total);
return 0;
}