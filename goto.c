#include<stdio.h>
int main()
{

    for(int i=0;i<10;i++)
    {
        if(i==8)
        {
          goto next;
        }
     printf("%d\t",i);

    }
    next:
    printf("\n");
      for(int i=50;i<100;i++)
    {
        if(i==60)
        {
          break;
        }
     printf("%d\t",i);

    }
    return 0;
}

