#include<stdio.h>

int CheckEven(int Value)
{
    if(Value%2 == 0)                     // 1 == 0  False
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int No1 = 0;
    int Result = 0;
    printf("Enter first number:\n");
    scanf("%d",&No1);
    
    Result = CheckEven(No1);             // checkEven(11);
    
    if(Result == 1)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is not Even\n");
    }
    
    return 0;
}
