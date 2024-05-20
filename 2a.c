#include<stdio.h>
int main()
{
        int a[2][2],b[2][2],i,j;                   
		for(i=0; i<3; i++)
		{
		     for(j=0; j<3; j++)
			{
			      printf("enter the value of a[%d][%d]:",i,j);
				  scanf("%d",&a[i][j]);
			}
			printf("\n");
		}
        for(i=0; i<3; i++)
        {
             for(j=0; j<3; j++)
            {
                  printf("enter the value of b[%d][%d]:",i,j);
                  scanf("%d",&b[i][j]);
            }
                  printf("\n");
        }
		for(i=0; i<3; i++)
		{
		     printf("\n");
		     for(j=0; j<3; j++)
			{
			      printf("%d",a[i][j]);
			}
			printf("\t");
        
        
        
             for(j=0; j<3; j++)
            {
                  printf("%d",b[i][j]);
            }
                  printf("\t");
        				  
      
		
		    
        }
}		
		
                  
		
                   		
			 