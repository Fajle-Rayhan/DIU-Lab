#include <stdio.h>
int main()
{
    int m,n;
    int o,p;
    printf("please enter  value:");
    scanf("%d",&m);
    printf("please enter 2 value:");
    scanf("%d",&n);
    printf("enter 3 value:");
    scanf("%d",&o);
    printf("enter 4 value:");
    scanf("%d",&p);

    {
        printf("&& operator:both condition are true\n");
    }

    if (o>p||p!=20)
    {
        printf("||operator:only one condition\n");


    }
    if(!m>n&&m!=o)
        {
        printf("!operator :both condition are true\n");

    }
    else{
        printf("!operator:both condition are true."
              "\but,status is inverted false\n");
    }
    return o;
}
