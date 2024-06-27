#include<stdio.h>
int main()
{
	int  no=0;
	
	printf("enter the no:\n");
	scanf("%d",&no);
	
	if(no>0)
	{
	  printf("%d is positive:\n",no);
	}
	
	else if(no<0)
	{
	    printf("%d no is negative:\n",no);
	}
	else
	{
	    printf("%d no nor positive or negative:\n",no);
	}
	return 0;
}
