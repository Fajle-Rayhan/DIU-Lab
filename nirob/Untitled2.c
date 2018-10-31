#include <stdio.h>
int main ()
{
    int pen=10,paper=12,apple=13,notepad=15;
    int value1,value2,value3,value4;
    int input;
    int price1,price2,price3,price4;
    int totalprice;
    printf("welcome my shopping\n\n");

    printf("please enter for 1 pen: ");
    scanf("%d",&input);
    printf("enter quantity for pen: ");
    scanf("%d",&value1);
    price1=pen*value1;
    printf("the price pen:%d",price1,value1);

     printf("please enter for 1 paper: ");
    scanf("%d",&input);
    printf("enter quantity for paper: ");
    scanf("%d",&value2);
    price2=paper*value2;
    printf("the price paper:%d",price2,value2);

     printf("please enter for 1 apple: ");
    scanf("%d",&input);
    printf("enter quantity for apple: ");
    scanf("%d",&value3);
    price3=apple*value3;
    printf("the price apple:%d",price3,value3);

     printf("please enter for 1 notepad: ");
    scanf("%d",&input);
    printf("enter quantity for notepad: ");
    scanf("%d",&value4);
    price4=pen*value4;
    printf("the price notepad:%d",price4,value4);
    totalprice=price1+price2+price3+price4;
    printf("total price:%d",totalprice);
    return 0;
}
