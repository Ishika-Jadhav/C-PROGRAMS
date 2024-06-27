#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,no;
	int *ptr;
	
	scanf("%d",&no);
	
	ptr=&no;
	
	//ptr = (int *)malloc(no*sizeof(int));
	ptr = (int *)calloc(no,sizeof(int));
	ptr = (int *)realloc(ptr,no*sizeof(int));
		
	for(int i=0;i<=no;i++)
	{
		printf("%u\n",ptr[i]);
	}
	
	
	return 0;
}
