#include<stdio.h>
int main()
{
int i,j;
for(int i=5;i>=1;i--)
{
for(int j=5;j>=i;j--)
{
printf("%d",i);
}
printf("\n",j);
}
return 0;
}