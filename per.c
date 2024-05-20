#include<stdio.h>
int main()
{
int sci,maths,eng;
float total,per;
printf("sci:");
scanf("%d",&sci);
printf("maths:");
scanf("%d",&maths);
printf("eng:");
scanf("%d",&eng);
total=sci+maths+eng;
printf("\ntotal is:%f",total);
per=total+300*100;
printf("\nper is:%f",per);
}
