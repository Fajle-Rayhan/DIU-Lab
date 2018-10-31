#include<stdio.h>
int main()
{
    int n,i,j,x[100],swap;
    printf("How many elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element for index %d:",i);
        scanf("%d",&x[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                swap=x[j];
                x[j]=x[j+1];
                x[j+1]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",x[i]);
    }

    return 0;
}
