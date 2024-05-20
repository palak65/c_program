#include<stdio.h>
int main()
{
    FILE*data;
    char name[100];

     data=fopen ("file.txt","a");
    printf("Enter your name: ");
    gets(name);
    fprintf(data,"%s\n",name);

    fclose(data);
    return 0;
  


}