#include<stdio.h>
#include<stdbool.h>

int main()
{
   int i = 0;
   int No = 53;
   bool Flag = true;
   
   for(i=2;i<=No/2;i++)
   {
       if((No%i)==0)
       {
           Flag = false;
           break;
       }
   }
   
   if(Flag == True)
   {
       printf("This is prime number\n");
   }
   else
   {
       printf("This is not a prime number\n");
   }
   return 0;
}
