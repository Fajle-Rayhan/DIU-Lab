#include<stdio.h>
int main()
{
    int inputValue[100]={9,4,3,1},i,j,swap;

    for(i =0;i<4 - 1;i++){
        for(j=0;j<4 - i -1;j++){
            if(inputValue[j]> inputValue[j+1]){
                swap = inputValue[j];
                inputValue[j] = inputValue[j+1];
                inputValue[j+1] = swap;
            }
        }
    }

    printf("sorted list in ascending ordering\n");
    for(i=0;i<4;i++){
        printf("%d",inputValue[i]);
    }
    return 0;
}
