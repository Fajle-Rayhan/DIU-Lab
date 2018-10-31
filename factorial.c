#include<stdio.h>
int temp[100];
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        if(temp[n]!=0)
        {
            return temp[n];
        }
        else
        {
            return temp[n]=n*factorial(n-1);
        }
    }
}
int main()
{
    memset(temp,0,sizeof(temp));
    int n,result;
    printf("Enter the number to know its factorial: ");
    scanf("%d",&n);
    result=factorial(n);
    printf("Factorial of this number is:%d",result);

    return 0;
}
