#include <stdio.h>
void perfact(int num)
{
	int i,sum=0,rem=0;
	for(i=1;i<num;i++){
		rem=%i;
	if(rem==0)
	{
		sum=sum+i;
		
	}
	}
  if(num==sum){
	  printf("perfact");
	  
  }else{
	  printf("not perfect");
  }
}
	

int main(){
	int c;
	printf("enter a number: ");
	scanf("%d",&c);
	
	perfact(c);
	return 0;

}