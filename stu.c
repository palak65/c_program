#include<stdio.h>
#include<string.h>
struct student
{
int num,total;
float per;
int marks;
int sub[5];
char sname[10];
};

struct student a[3];
int main()
{

	
		for(int i=0;i<3;i++)
		{
			printf("enter student num:");
			scanf("%d",&a[i].num);
			printf("enter student sname:");
			scanf("%s",&a[i].sname);
			
			for(int j=0;j<5;j++)
			{
				printf("enter marks:");
			    scanf("%d",&a[i].sub[j]);
				a[i].total+=a[i].sub[j];
			}
			printf("total:%d\n",a[i].total);
			a[i].per.total/5;
			printf("per:%f\n",a[i].per);
		}
		return 0;
}
				