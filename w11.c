#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter the n:");
	scanf("%d",&n);
do
{
	sum=sum+i;
i++;
}
while(i<=10);
printf("%d\t",sum);
	
return 0;
}