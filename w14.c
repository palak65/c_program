#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the n:");
	scanf("%d",&n);
do
{
	printf("%d\n",i*i);
	i++;
}
while(i<=n);
return 0;
}