#include<stdio.h>
int main()
{
  char str[10];
  int i,length=0;
  
  printf("enter the string:");
  scanf("%s",str);
  
  for(i=0;str[i]!='\0';i++)
  {
	  length++;
  }
 
  printf("%d",length);


  return 0;
  
  
  }
 