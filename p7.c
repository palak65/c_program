#include<stdio.h>
int main()
{
char z='A';
int i,j;
for(i='A';i<='E';i++)
{
for(j='A';j<='E';j++)
{
printf("\t %c",z++);
}
printf("\n");
}
return 0;
}