#include<stdio.h>
main(){
    int a,b,c,d,e;
printf("Enter the lab final exam within 40:");
scanf("%d",&a);
printf("Enter the lab final reports within 25:");
scanf("%d",&b);
printf("Enter lab performance within 25:");
scanf("%d",&c);
printf("Enter attendance within 10:");
scanf("%d",&d);
e=a+b+c+d;
printf("The final result within 100=%d+%d+%d+%d=%d\n",a,b,c,d,e);
printf("I got %d out of 100",e);
}
