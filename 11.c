#include<stdio.h>
int main()
{
 int i,j,a=65;
for(i=65;i<=69;i++)
{
for(j=65;j<=i;j++)
{
	if(i%2!=0)
	{
printf("%c",a);
}
else
{
printf("%c",a+32);
}
a++;
}
printf("\n");
}
return 0;
}