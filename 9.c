#include<stdio.h>
int main()
{
int i,j,a=65;
for(i=65;i<=69;i++)
{
for(j=65;j<=i;j++)
{
printf("%c",a);
a++;
}
printf("\n");
}

return 0;
}