#include<stdio.h>
void number()
{
	int a,total=0;
	printf("enter the number:");
	scanf("%d",&a);
	
for(int i=0;i<=a;i++)
	{
		if(i%2==0)
		{
		total+=i;
		}
		
		
		
		
	}
	printf("%d\t",total);
}

int main()

{
	
    number();	
	return 0;
}
	