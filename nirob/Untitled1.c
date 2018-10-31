/*program for a shop*/
#include<stdio.h>
main()
{
    int a,b=10,c,d;
    printf("Enter the product code:");
    scanf("%d",&a);
    printf("\tEnter the quantity:");
    scanf("%d",&c);
    d=b*c;
    printf("\t  %d*%d=%d",b,c,d);

     int e,f=20,g,h;
    printf("\nEnter the product code:");
    scanf("%d",&e);
    printf("\tEnter the quantity:");
    scanf("%d",&g);
    h=f*g;
    printf("\t  %d*%d=%d",f,g,h);

     int i,j=15,k,l;
    printf("\nEnter the product code:");
    scanf("%d",&i);
    printf("\tEnter the quantity:");
    scanf("%d",&k);
    l=j*k;
    printf("\t  %d*%d=%d",j,k,l);

     int m,n=50,o,p;
    printf("\nEnter the product code:");
    scanf("%d",&m);
    printf("\tEnter the quantity:");
    scanf("%d",&o);
    p=n*o;
    printf("\t  %d*%d=%d",n,o,p);

    int s;
    s=d+h+l+p;

    printf("\nTotal price= %d",s);
}

