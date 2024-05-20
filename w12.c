#include<stdio.h>
int main()
{
	int n,i=1,total=0;
	printf("enter the n:");
	scanf("%d",&n);
do
{
	if(i%2==1)
		total=total+i;
	i++;
}
while(i<=n);
printf("%d\t",total);
	
return 0;
}