#include <stdio.h>
int main ()
{
    int m,n;

    printf("please enter one  input:");

    scanf("%d",&m);
    printf("please enter another input:");
    scanf("%d",&n);
    if(m==n)
    {
        printf("%d and %d are equal",m,n);
    }
    else{
        printf("%d and %d are not equal",m,n);
    }
    return 0;
}
