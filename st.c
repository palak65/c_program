#include<stdio.h>
#include<string.h>
struct employee
{
int id;
char name[20];
int salary;
};
struct employee e1,e2;
int main()
{
e1.id=1;
strcpy(e1.name,"raj");
e1.salary=5000;

printf("id:%d\nmname:%s\nsalary:%d\n",e1.id,e1.name,e1.salary);
return 0;
}