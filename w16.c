#include<stdio.h>
int main()
{
	int n,i=1,t=1;
	printf("enter the n:");
	scanf("%d",&n);
do
{
	
	printf("%d\n",t);
  t=t+t;
	i++;
	}
while(i<=n);
	printf("%d\n",t);
return 0;
}