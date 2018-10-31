#include<stdio.h>
int main()
{
    int n, x[50],i,search,count=0;

    printf("How many elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element for index %d: ",i);
        scanf("%d",&x[i]);
    }
    printf("Enter a element to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(x[i]==search)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("%d isn't found in this array",search);
    }
    else
    {
        printf("%d is found in this array %d times :",search,count);
    }
    return 0;
}
