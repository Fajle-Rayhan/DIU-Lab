#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6]={1,5,4,3,7,10};
  int tmp;
    int i,j;
    for (i=0;i<6;i++){
        for(j=0;j<=i;j++){
            if(a[j]>a[j+1]){
             tmp=a[j];
             a[j]=a[j+1];
             a[j+1]=tmp;

            }
            for (i=0; i<6;i++){
           printf("%d,",a[i]);}
           printf("\n");

        }
    }


    printf("sorted list in ascending order:\n");
        for (i=0; i<6;i++){
        printf("%d\n",a[i]);}
       return 0;


}
