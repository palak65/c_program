#include<stdio.h>
int main()
{
	
for(int j=1;j<=2;j++)
{
	int n;
	printf("\n enter the %d size of array:",j);
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n;i++)
	{
		printf("enter %d num:",i+1);
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
}
}-