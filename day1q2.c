#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("%d is equal %d",num1,num2);
    }
    else
    {
        printf("%d is not equal",num1,num2);
    }
