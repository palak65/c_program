#include<stdio.h>
int main()
{
int i,j;
for(int i='A';i<='E';i++)
{
for(int j='A';j<='E';j++)
{
printf(" \t %c",i);
}
printf("\n",j);
}
return 0;
}