#include<stdio.h>
int main()
{
         int a[5],i,odd=0,even=0,total=0;
		 for(i=0; i<5; i++)
		 {
		     printf("enter the value[%d]:",i);
			 scanf("%d",&a[i]);
	     }
         for(i=0; i<5; i++)
		 {
             if(i%2==0)
             {
                  even=even+a[i];
             }
             else{
                  odd=odd+a[i];
             }
		 }total=even+odd;
         printf("even sum : %d" ,even);
         printf("\nodd sum : %d" ,odd);
		 printf("\ntotal is : %d" ,total);
}		 
		  
		 	 
 		  