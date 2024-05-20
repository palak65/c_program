#include<stdio.h>
int main()
{
	
int t1=0,t2=1,nextterm,n;
printf("enter the number of terms:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%2d\t",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
return 0;
}