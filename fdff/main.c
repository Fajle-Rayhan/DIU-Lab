#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cont[4];
   int j;
   int i;
   int k;

   for(k=0;k<4;k++){
         printf("enter array value:");
    scanf("%d",& cont[k]);
   }
   printf("what to search:");
   scanf("%d", & j);
   for(i=0;i<4;i++){
    if(j==cont[i]){
        printf("%d found in index %d \n", j,i);
    }

   }
    return 0;
}
