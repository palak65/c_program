#include<stdio.h>
int main()
{
int a[5],i,sum=0;
for(int i=0;i<5;i++)
{
printf("enter value a(%d)",i);
scanf("%d",&a[i]);
}
              for(i=0; i<5; i++)
              {
                   printf("%d\n",a[i]);
                  sum+=a[i];
              }
			  printf("%d",sum);
}