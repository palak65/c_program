#include<stdio.h>
int main()
{
char n;
for(int i='A';i<='Z';++i)
{
printf("%c-%c\t",i,i+32);
}
return 0;
}