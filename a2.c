#include<stdio.h>
int main()
{
      int a[2],b[2],c[2],i,t,per;
	  for(i=0;i<2;i++)
	  {
	         printf("enter the eco marks %d:",i);
			 scanf("%d",&a[i]);
	  }
      for(i=0; i<2; i++)
      {
             printf("enter the stat marks %d:",i);
             scanf("%d",&b[i]);
	  }
      for(i=0; i<2; i++)
      {
             printf("enter the eng marks %d:",i);
             scanf("%d",&c[i]);
      }
             printf("eco\t stat\t eng\t t\t per");
      for(i=0; i<2; i++)
      {
             t=a[i]+b[i]+c[i];
             per=(a[i]+b[i]+c[i])/3;
             printf("\n%d\t%d\t%d\t%d\t%d\t",a[i],b[i],c[i],t,per);
      if(a[i]<35||b[i]<35||c[i]<35)
      {
             printf("fail.....");
	  }
	  else if(per<75 && per>=60)
	  {
	         printf("grade b");
      }
      else if(per<60 && per>=45)
      {
             printf("grade c");
      }
      else if(per<45 && per>=36)
      {
             printf("grade d");
      }
      else if(per>=75)
      { 
             printf("grade a");
      }
	  }
}	  


























	  